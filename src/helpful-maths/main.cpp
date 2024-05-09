/* 
    Author:     @imAlessas
    Problem:    339A - Helpful Maths
                https://codeforces.com/problemset/problem/339/A
*/

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    string s, t = "";
    map<char, int> m = { {'1', 0}, {'2', 0}, {'3', 0}, {'+', 0} };


    cin >> s;

    for(char c : s)
        m[c] = m[c] + 1;

   
    for(int i = 0; i < m['1']; i++)
        t = t + "1+";
    
    for(int i = 0; i < m['2']; i++)
        t = t + "2+";

    for(int i = 0; i < m['3']; i++)
        t = t + "3+";

    t.pop_back();

    cout << t << endl;

    return 0;
} // main
