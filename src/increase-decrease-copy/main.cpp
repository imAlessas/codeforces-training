/* 
    Author:     @imAlessas
    Problem:    1976B - Increase/Decrease/Copy
                https://codeforces.com/problemset/problem/1976/B
*/

#include <bits/stdc++.h>

using namespace std;


// function definition



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, aa, bb, last, flag, min_dist;
    long long operations;
    vector<int> a = {}, b = {};

    cin >> t;

    while(t--){
        
        flag = 0;
        operations = 1;
        a.clear();
        b.clear();

        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> aa;
            a.push_back(aa);
        }

        for(int i = 0; i < n + 1; i++){
            cin >> bb;
            b.push_back(bb);
        }

        last = b[n];
        min_dist = abs(a[0] - last);

        for(int i = 0; i < n; i++){
            operations += abs(a[i] - b[i]);


            if( !flag && (a[i] < last && b[i] >= last) || (b[i] < last && a[i] >= last) )
                flag = 1;
            else if ( abs(a[i] - last) < min_dist || abs(b[i] - last) < min_dist)
                min_dist = min( abs(a[i] - last), abs(b[i] - last) );
        }


        if( !flag )
            operations += min_dist;
            

        cout << operations << endl << endl;
        
    }

    return 0;
} // main
