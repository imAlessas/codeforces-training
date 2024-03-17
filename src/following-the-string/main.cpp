/* 
   Author:  @imAlessas
   Problem: 1927B -  Following the String
            https://codeforces.com/problemset/problem/1927/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, a;
    string s;
    char c;

    map<char, int> m;

    cin >> t;

    while(t--){
        s = ""; c = 'a'; m = {};

        cin >> n;

        while(n--){
            cin >> a;

            if(a){ // find correct character
                for (auto& pair : m) 
                    if (pair.second == a) {
                        s += pair.first;
                        pair.second++;
                        break; 
                    }
            } else { // add new character
                m.insert({c, 1});
                s += string(1, c++);
            }
        }

        cout << s << endl;
    }

    return 0;
} // main
