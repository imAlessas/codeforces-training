/* 
    Author:     @imAlessas
    Problem:    1941A - Rudolf and the Ticket
                https://codeforces.com/problemset/problem/1941/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, m, k, b, c, count;
    vector<int> v;

    cin >> t;

    while(t--){

        v.clear();
        count = 0;

        cin >> n >> m >> k;

        while(n--){
            cin >> b;
            v.push_back(b);
        }

        while(m--){
            cin >> c;
            for(int b : v)
                if((c + b) <= k)
                    count++;
        }

        cout << count << endl;
        
    }

    return 0;
} // main
