/* 
    Author:     @imAlessas
    Problem:    1955A - Yogurt Sale
                https://codeforces.com/problemset/problem/1955/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, a, b;

    cin >> t;

    while(t--){

        cin >> n >> a >> b;

        if( 2 * a <= b)
            cout << n * a;
        else
            cout << (n / 2) * b + (n % 2) * a;
        
        cout << endl;
    }

    return 0;
} // main
