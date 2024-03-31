/* 
    Author:     @imAlessas
    Problem:    1950D - Product of Binary Decimals
                https://codeforces.com/problemset/problem/1950/D
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    // calculates all the binary decimals from 1 to 5 * 10^5
    int current;
    bool flag;
    vector<int> bin_dec = {};

    for(int i = 1; i <= 5 * (10 ^ 5); i++){
        current = i;

        while(current){
            if( current % 10 > 1){
                flag = false;
                break;
            }
            current = current / 10;
        }

        if(flag)
            bin_dec.push_back(i);
    }


    int t, n;

    cin >> t;

    while(t--){

        cin >> n;


    }

    return 0;
} // main
