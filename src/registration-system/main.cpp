/* 
   Author:  @imAlessas
   Problem: Registration system
            https://codeforces.com/problemset/problem/4/C
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, int>> names = {};
    for (int i = 0; i < n; i++) {
        string s = "3";
        // cin >> s;
        
        auto it = find_if(names.begin(), names.end(), [&s](const pair<string, int>& element) {
            return element.first == s;
        });

        cout << i << endl;

        if(it != names.end()){
            cout << "OK" << endl;
            names.push_back({s, 0});
        } else {
            cout << s + to_string(it->second) << endl;
            it->second++;
        }
    }

    return 0;
} // main
