/* 
    Author:     @imAlessas
    Problem:    1955C - Inhabitant of the Deep Sea
                https://codeforces.com/problemset/problem/1955/C
*/

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t;
    cin >> t;

    while(t--) {

        long long n, k, tmp, sum = 0;
        vector<long long> a = {};

        cin >> n >> k;

        while(n--) {
            cin >> tmp;
            sum += tmp;
            a.push_back(tmp);
        }


        // Skip calculation if the attacks are greater than the sum
        if(k >= sum) {
            cout << a.size() << endl;
            continue;
        }


        // Compact number of attacks from left and from right
        long long left_attacks = k / 2 + (k % 2);
        long long right_attacks = k / 2;

        // Indexes of the first not-suked ship in both directions
        long long left_index = 0;
        long long right_index = a.size() - 1;

        // Number of sunked ships
        long long sunked = 0;

        
        // Process all attacks of the first (left) ships
        while( left_attacks > 0 ) {
            
            if (left_attacks >= a[left_index]) {
                left_attacks -= a[left_index];
                left_index++;
                sunked++;
            } else break;

        }

        
        // Process all attacks of the last (right) ships
        while( right_attacks > 0 ) {
            
            if (right_attacks >= a[right_index]) {
                right_attacks -= a[right_index];
                right_index--;
                sunked++;
            } else break;

        }

        cout << sunked << endl;
        
    }

    return 0;
    
} // main
