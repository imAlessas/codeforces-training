/* 
   Author:  @imAlessas
   Problem: 1912L - LOL lovers
            https://codeforces.com/problemset/problem/1912/L
*/

#include <bits/stdc++.h>

using namespace std;

// function definition
void divide(const string&, int);

int main() {
    int n;
    string s;

    cin >> n;
    cin >> s;

    divide(s, s.size());     

    return 0;
} // main



void divide(const string& s, int n){
    for(int pivot = 0; pivot < n - 1; pivot++){
        static pair<int, int> left, right;
        left.first = 0, left.second = 0, right.first = 0, right.second = 0;
        
        for (int i = 0; i < n; i++) {
            if (i <= pivot) {
                if (s[i] == 'L') {
                    left.first++;
                } else {
                    left.second++;
                }
            } else {
                if (s[i] == 'L') {
                    right.first++;
                } else {
                    right.second++;
                }
            }
        }

        if (left.first != right.first && left.second != right.second) {
            cout << pivot + 1 << endl; // Number of items you take
            return;
        }
    }
    
    cout << "-1" << endl;
    return;
} // divide