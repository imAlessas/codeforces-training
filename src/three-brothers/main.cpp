/* 
    Author:     @imAlessas
    Problem:    2010B - Three Brothers
                https://codeforces.com/problemset/problem/2010/B
*/

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int first, second;
    set<int> brothers = {1, 2, 3};

    cin >> first >> second;

    brothers.erase(first);
    brothers.erase(second);

    cout << *brothers.begin() << endl;

    return 0;
    
} // main
