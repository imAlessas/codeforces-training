/* 
   Author: @imAlessas
   Problem: https://codeforces.com/problemset/problem/282/A
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    for(int i = 0; i < n; i++){
        string operation;
        cin >> operation;

        if (operation.find("++") != string::npos)
            x++;
        if (operation.find("--") != string::npos)
            x--;
    }

    cout << x << endl;

    return 0;
} // main
