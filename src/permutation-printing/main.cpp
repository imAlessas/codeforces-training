/* 
    Author:     @imAlessas
    Problem:    1930B - Permutation Printing
                https://codeforces.com/problemset/problem/1930/B
*/

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n;

    cin >> t;

    while(t--){

        cin >> n;
        int left = 1, right = n;
        
        for (int i = 1; i <= n; i++) {

            if (i % 2)
                cout << left++ << " ";
            else
                cout << right-- << " ";

        }
        
        cout << endl;
        
    }

    return 0;
    
} // main
