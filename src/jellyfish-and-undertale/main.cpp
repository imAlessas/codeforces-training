/* 
    Author:     @imAlessas
    Problem:    1875A - Jellyfish and Undertale
                https://codeforces.com/problemset/problem/1875/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, a, b, n;
    long long x, count;

    cin >> t;

    while(t--){

        cin >> a >> b >> n;
        
        count = b;

        while(n--){

            cin >> x;

            count = count + (x < a ? x : a - 1);
        }

        cout << count << endl;
        
    }

    return 0;
} // main
