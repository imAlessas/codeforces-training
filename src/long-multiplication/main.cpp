/* 
    Author:     @imAlessas
    Problem:    1954C - Long Multiplication
                https://codeforces.com/problemset/problem/1954/C
*/

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t;
    string x, y;

    cin >> t;

    while(t--) {

        cin >> x >> y;

        int i;
        
        // scan x and y and stops when they are not the same
        for(i = 0; i < x.size() && x[i] == y[i]; i++);

        // bigger one will always be x
        if( y[i] > x[i] )
            swap(x[i], y[i]); 

        // y gets all the biogger digits
        for(i++; i < x.size(); i++)
            if( x[i] > y[i] )
                swap(x[i], y[i]); 

        cout << x << endl << y << endl;
        
    }

    return 0;

} // main
