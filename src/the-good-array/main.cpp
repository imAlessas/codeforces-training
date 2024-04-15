/* 
    Author:     @imAlessas
    Problem:    1839A - The Good Array
                https://codeforces.com/problemset/problem/1839/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, k, count;

    cin >> t;

    while(t--){

        count = 0;

        cin >> n >> k;

        vector<bool> good_array(n);

        for(int i = 0; i < n; i++){

            if( count < ((i + k - 1) / k) ){
               
                good_array[i] = !good_array[i];
                good_array[n - i] = !good_array[n - i];
               
                count++;
            }
        }

        cout << count + 1 << endl;
        
    }

    return 0;
} // main
