/* 
    Author:     @imAlessas
    Problem:    1952H - Palindrome
                https://codeforces.com/problemset/problem/1952/H
*/

#include <bits/stdc++.h>

using namespace std;

// function definition
void check_palindrome(const string& s);


int main() {

    int t;
    string s;

    cin >> t;

    while(t--){

        cin >> s;
        
        /* use a vectro to check to construct a string beased on the values on the i-th column */
        
    }

    return 0;
} // main




void check_palindrome(const string& s){

    if(!s.size()){
        cout << "NO" << endl;
        return;
    }


    bool flag = true;
    for(int i = 0; i < s.size() / 2; i++)
        flag = s[i] == s[s.size() - i - 1];

    if(flag)
        cout << "YES";
    else
        cout << "NO";
    
    cout << endl;

}