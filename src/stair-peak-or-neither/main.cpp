/* 
    Author:     @imAlessas
    Problem:    1950A - Stair, Peak, or Neither?
                https://codeforces.com/problemset/problem/1950/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {
    int t;
    unsigned char a, b, c;

    cin >> t;

    while(t--){
        
        cin >> a >> b >> c;

        if ( a < b && b < c )
            cout << "STAIR" << endl;
        else if ( a < b && c < b )
            cout << "PEAK" << endl;
        else    
            cout << "NONE" << endl;
    }


    return 0;
} // main
