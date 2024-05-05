/* 
    Author:     @imAlessas
    Problem:    1956A - Nene's Game
                https://codeforces.com/problemset/problem/1956/A
*/

#include <bits/stdc++.h>

using namespace std;




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, k, q, ak, nk;

    cin >> t;

    while(t--){

        cin >> k >> q;

        cin >> ak; k--;

        while(k--){
            cin >> nk; // nk used as a tmp variable
            if(nk < ak)
                ak = nk;
        }


        while(q--){
            cin >> nk;
            cout << (nk < ak ? nk : ak - 1) << " ";
        }

        cout << endl;
        
    }

    return 0;
} // main
