/* 
    Author:     @imAlessas
    Problem:    1915A - Odd One Out
                https://codeforces.com/problemset/problem/1915/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t;
    array<int, 3> a;

    cin >> t;

    while(t--){

        cin >> a[0];
        cin >> a[1];
        cin >> a[2];

        if(a[0] == a[1])
            cout << a[2] << endl;
        
        if(a[0] == a[2])
            cout << a[1] << endl;
        
        if(a[1] == a[2])
            cout << a[0] << endl;        

    }

    return 0;
} // main
