/* 
    Author:     @imAlessas
    Problem:    1954A - Painting the Ribbon
                https://codeforces.com/problemset/problem/1954/A
*/

#include <bits/stdc++.h>

using namespace std;


// function definition

int get_max(const vector<int>&);





int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, m, k;

    cin >> t;

    while(t--){

        cin >> n >> m >> k;
        
        vector<int> v(m);

        for(int i = 0; i < n; i++)
            v[i % m]++;
        
        cout << ((k >= n - get_max(v)) ? "no" : "yes") << endl;

    }

    return 0;
} // main





// returns the max value inside the vector
int get_max(const vector<int>& v){

    int max = v.back();

    for(int i : v)
        if(i > max)
            max = i;
    
    return max;
} //  get_max
