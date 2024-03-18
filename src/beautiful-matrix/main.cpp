/* 
    Author:     @imAlessas
    Problem:    263A - Beautiful Matrix
                https://codeforces.com/problemset/problem/263/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {
    int a, row, col;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> a;
            if(a){
                row = i + 1;
                col = j + 1;
            }
        }
    }

    cout << abs(3 - row) + abs(3 - col) << endl;


    return 0;
} // main
