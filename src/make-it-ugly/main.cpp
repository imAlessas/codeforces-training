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

    int t, n, a;
    vector<int> v, w;
    bool same_numbers;

    cin >> t;

    while(t--){

        v.clear();
        same_numbers = true;

        cin >> n;

        while(n--){
            cin >> a;
            v.push_back(a);
            
            if(v.size() > 1)
                same_numbers = same_numbers && (v[v.size() - 1] == v[v.size() - 2]);
        }
     
        n = v.size();

        w = v;

        while(v.front() == v.back())
            v.pop_back();
        

        reverse(w.begin(), w.end());

        while(w.front() == w.back())
            w.pop_back();

        a = min(n - v.size(), n - w.size());
        
        cout << ((same_numbers || n == 1) ? -1 : a ) << endl;
        
    }

    return 0;
} // main
