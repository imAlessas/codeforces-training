/* 
    Author:     @imAlessas
    Problem:    1703B - ICPC Balloons
                https://codeforces.com/problemset/problem/1703/B
*/

#include <bits/stdc++.h>

using namespace std;

// function definition


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, n, count, old_size;
    char c;
    set<char> problems;

    cin >> t;

    while(t--){

        problems.clear();
        old_size = 0;
        count = 0;

        cin >> n;

        while(n--){

            cin >> c;

            problems.insert(c);

            if(problems.size() > old_size)
                count++;
            
            count++;

            old_size = problems.size();

        }

        cout << count << endl;
        
    }

    return 0;
} // main
