/* 
    Author:     @imAlessas
    Problem:    112A - Petya and Strings
                https://codeforces.com/problemset/problem/112/A
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
 
    string first, second;
    int flag = 0;
 
    cin >> first >> second;
 
 
    for(int i = 0; i < first.size(); i++) {
        if( tolower(first[i]) < tolower(second[i]) ){
            flag = -1;
            break;
        }
 
        if( tolower(first[i]) > tolower(second[i]) ){
            flag = 1;
            break;
        }
    }
 
    cout << flag << endl;
 
    return 0;
 
} // main
