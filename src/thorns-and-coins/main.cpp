/* 
    Author:     @imAlessas
    Problem:    1932A - Thorns and Coins
                https://codeforces.com/problemset/problem/1932/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, coins;
    char cell;
    bool flag;

    cin >> t;

    while(t--){

        coins = 0;
        flag = true;
        
        cin >> n;

        while(n--){

            cin >> cell;

            if(cell == '@' && flag)
                coins++;
            
            if(cell == '*' && n){
                cin >> cell;
                n--;

                if(cell == '@' && flag)
                    coins++;
                    
                if(cell == '*')
                    flag = false;
            }
        }

        cout << coins << endl;
        
    }

    return 0;
} // main
