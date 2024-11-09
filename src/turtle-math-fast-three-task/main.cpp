/* 
    Author:     @imAlessas
    Problem:    1933B - Turtle Math: Fast Three Task
                https://codeforces.com/problemset/problem/1933/B
*/

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, tmp, sum, rem;
    bool has_rem_1;


    cin >> t;

    while(t--){

        sum = 0;
        has_rem_1 = false;

        cin >> n;

        while(n--){
            cin >> tmp;
            sum += tmp;

            // Keep track of a number with reminder of 1
            has_rem_1 = has_rem_1 || (tmp % 3 == 1);
        }

        
        rem = sum % 3;

        // Process the answer
        if(rem == 0)
            cout << 0;
        else if (rem == 1)
            cout << (has_rem_1 ? 1 : 2);
        else
            cout << 1;
        
        cout << endl;

    }

    return 0;
    
} // main
