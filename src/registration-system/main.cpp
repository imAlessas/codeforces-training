/* 
   Author:  @imAlessas
   Problem: 4C - Registration system
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
        string s;
        cin >> s;
        
        auto it = find_if(names.begin(), names.end(), [&s](const pair<string, int>& element) {
            return element.first == s;
        });

        if(it == names.end()){
            cout << "OK" << endl;
            names.push_back({s, 0});
        } else {
            it->second++;
            cout << s + to_string(it->second) << endl;
        }
    }

    return 0;
} // main
