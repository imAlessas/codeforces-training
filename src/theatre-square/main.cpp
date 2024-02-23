/* 
   Author:  @imAlessas
   Problem: 1A - Theatre Square
            https://codeforces.com/problemset/problem/1/A
*/

#include <iostream>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long hz_tiles = (n + a - 1) /a;
    long long ver_tiles = (m + a - 1) /a;
    
    cout << hz_tiles * ver_tiles << endl;


    return 0;
} // main

/*
    Also tried to run the code:

        double n, m, a;
        cin >> n >> m >> a;

        cout << ceil(n / a) * ceil(m / a) << endl;

    but there was a "Wrong answer on test 9", probably because the inputs were double.

    I also tried using long long inputs with static_cast<double> and the ceil function but the error on the test still occurred.
*/