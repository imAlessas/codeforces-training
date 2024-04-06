/* 
    Author:     @imAlessas
    Problem:    1948A - Spcecial Characters
                https://codeforces.com/problemset/problem/1948/A
*/

#include <bits/stdc++.h>

using namespace std;


int main() {

    int t, n;
    string str, tmp;
    char c;

    cin >> t;

    while(t--){

        cin >> n;

        // if it is odd the string does no exist
        if(!(n % 2)){

            str = "";
            c = 'A';
            
            // builds the string
            while(n){
                tmp = c;
                str = str + tmp + tmp;
                c++;
                n -= 2;
            }
            
            cout << "YES" << endl << str << endl;

        } else 
            cout << "NO" << endl;

    }

    return 0;
} // main

