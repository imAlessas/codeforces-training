/* 
    Author:     @imAlessas
    Problem:    1954B - Make It Ugly
                https://codeforces.com/problemset/problem/1954/B
*/

#include <bits/stdc++.h>

using namespace std;


// function definition



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, m, a, i, initial, ans, lst;

    cin >> t;

    while(t--){

        lst = -1;
        i = 1;

        cin >> n >> initial;
        m = n;
        n--;

        ans = m;

        while(n--){
            cin >> a;

            if( a != initial) {
                ans = min(ans, i - lst - 1);
                lst = i;
            }

            i++;
            
        }
        
        ans = min(ans, m - lst - 1);

        cout << (ans == m ? -1 : ans) << endl << endl;
        
    }

    return 0;
} // main
