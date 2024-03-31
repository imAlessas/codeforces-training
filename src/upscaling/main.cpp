/* 
    Author:     @imAlessas
    Problem:    1950B - Upscaling
                https://codeforces.com/problemset/problem/1950/B
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {
    int t, n;
    string line;

    cin >> t;


    while(t--){
        cin >> n;

        for(unsigned char i = 0; i < n; i++){
            
            line = "";
            for(unsigned char j = 0; j < n; j++){
                
                if( ((i % 2) + (j % 2)) % 2 ) // one even and one odd
                    line += "..";
                else // both even or both odd
                    line += "##";
            }
            cout << line << endl << line << endl;
        }
                
    }

    return 0;
} // main
