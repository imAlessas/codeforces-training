/* 
   Author: @imAlessas
   Problem: https://codeforces.com/problemset/problem/4/A
*/

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    // Checking if weight is even and greater than 2
    if (w % 2 || w <= 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
} // main
