/* 
   Author:  @imAlessas
   Problem: 1931D - Divisible Pairs
            https://codeforces.com/problemset/problem/1931/D
*/

#include <bits/stdc++.h>

using namespace std;

// function definition
bool is_divisible(const int&, const int&);
bool is_beautyful_pair(const int&, const int&, const int&, const int&);

int main() {
    int t, n, x, y, a, count;
    vector<int> v;

    cin >> t;

    while(t--){
        count = 0; v = {};
               
        cin >> n >> x >> y;

        while(n--){
            cin >> a;
            v.push_back(a);
            
            // time complexity is too high
            for(int i = 0; i < v.size() - 1; i++)
                if(is_beautyful_pair(v[i], v[v.size() - 1], x, y))
                    count++;
            
        }
        cout << count << endl;
    }

    return 0;
} // main



// check if the pair is a beutiful one
bool is_beautyful_pair(const int& i, const int& j, const int& x, const int& y){
    return is_divisible(i + j, x) && is_divisible(j - i, y);
} // is_beautyful_pair



// check if a number is divisible by another
bool is_divisible(const int& number, const int& divisor){
    return !(number % divisor);
} // is_divisible
