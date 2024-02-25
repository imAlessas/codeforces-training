/* 
   Author:  @imAlessas
   Problem: 118A - String Task
            https://codeforces.com/problemset/problem/118/A
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t = "";
    cin >> s;

    // lower case string
    for (char &c: s){
        c = tolower(c);
        if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||  c == 'y'))
            t.append("." + string(1, c));
    }
    
    cout << t << endl;       

    return 0;
} // main
