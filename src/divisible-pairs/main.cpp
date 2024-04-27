/* 
   Author:  @imAlessas
   Problem: 1931D - Divisible Pairs
            https://codeforces.com/problemset/problem/1931/D
*/

#include <bits/stdc++.h>

using namespace std;


// function definition


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, x, y, a;
    long long count;
    map<pair<int, int>, int> m;

    cin >> t;

    while(t--){
        count = 0;
        m = {};
               
        cin >> n >> x >> y;

        while(n--){
            
            cin >> a;

            count = count + m[ {(x - a % x) % x, a % y} ];

            m[ {a % x, a % y} ] ++;
            
        }
        cout << count << endl;
    }

    return 0;
} // main
