/* 
    Author:     @imAlessas
    Problem:    1955B - Progressive Square
                https://codeforces.com/problemset/problem/1955/B
*/

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, c, d, b;

    bool flag;

    cin >> t;

    while(t--){
        
        cin >> n >> c >> d;

        // get the progressive vector
        vector<int> w;
        for(int i = 0; i < n * n; i++){
            cin >> b;
            w.push_back(b);
        }

        sort(w.begin(), w.end());


        vector<int> v(n * n);
        v[0] = w[0];

        // build my progressive vector
        for(int i = 1; i < v.size(); i++)
            v[i] = i % n ? v[i - 1] + d : v[i - n] + c;

        sort(v.begin(), v.end());

        // check if they are the same vector
        flag = true;
        for(int i = 0; i < v.size() && flag; i++)
            flag = (v[i] == w[i]);

        cout << ( flag ? "yes" : "no" ) << endl;
        
    }

    return 0;
} // main
