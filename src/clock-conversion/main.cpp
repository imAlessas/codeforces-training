/* 
    Author:     @imAlessas
    Problem:    1950C - Clock Conversion
                https://codeforces.com/problemset/problem/1950/C
*/

#include <bits/stdc++.h>

using namespace std;


// function definition
int rotate(const int&);


int main() {
    int t, hours;
    string s, suffix;

    cin >> t;

    while(t--){
        suffix = " AM";

        cin >> s;

        hours = stoi(s.substr(0, 2));

        if(hours >= 12){
            hours -= 12;
            suffix = " PM";
        }

        cout << setw(2) << setfill('0') << rotate(hours) << s.substr(2, 3) << suffix << endl;

    }

    return 0;
} // main


// conters 00 into 12
int rotate(const int& h){
    if(!h)
        return 12;
    
    return h;
} // rotate