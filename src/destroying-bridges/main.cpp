/* 
    Author:     @imAlessas
    Problem:    1944A - Destroying Bridges
                https://codeforces.com/problemset/problem/1944/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, k;

    cin >> t;

    while(t--){

        cin >> n >> k;

        if(k >= n - 1)
            cout << 1 << endl;
        else 
            cout << n << endl;
        
    }

    return 0;
} // main
