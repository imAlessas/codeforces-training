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

    int t, a, b, n, count, x;

    cin >> t;

    while(t--){

        count = 0;
        
        cin >> a >> b >> n;

        while(b--){

            while(b + x < a && n > 0){
                b += x;
                cin >> x;
                n--;
            }

            if(b == 1 && n > 0){
                b = a;
                cin >> x;
                n--;
            }
            
            if(b == 1 && n == 0){
                b = a;
                n--;
            }

            count++;

        }
        

        cout << count << endl;
        
    }

    return 0;
} // main
