/* 
    Author:     @imAlessas
    Problem:    1930A - Maximise the Score
                https://codeforces.com/problemset/problem/1930/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, a, score;
    vector<int> v;

    cin >> t;

    while(t--){

        cin >> n;
        n *= 2;

        v = {};
        while(n--){
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        score = 0;
        for(int i = 0; i < v.size(); i += 2)
            score = score + v[i];

        cout << score << endl;        

    }

    return 0;
} // main
