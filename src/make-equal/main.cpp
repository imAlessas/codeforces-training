/* 
   Author:  @imAlessas
   Problem: 1931B - Make Equal
            https://codeforces.com/problemset/problem/1931/B
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
// function definition
bool pour_water(vector<int>&, int);
 
int main() {
    int t, sum, n, m, a, avg;
    vector<int> v = {};
    
    cin >> t;
    
    while(t--) {
        v.clear();
        sum = 0;
        
        cin >> n;
        m = n;
        
        while(n--){
            cin >> a;
            v.push_back(a);
            sum += a;
        }
        
        avg = sum/m;

        if(pour_water(v, avg))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }    
    
    return 0;
} // main


// performs algorithm that pour water from i to i + 1
bool pour_water(vector<int>& v, int avg){
    int diff;
    for(int i = 0; i < v.size() - 1; i++) {
        if(v[i] < avg)
            return 0;
        
        diff = v[i] - avg;
        
        if(diff){
            v[i] = v[i] - diff;
            v[i + 1] = v[i + 1] + diff;
        }
    }
    return 1;
} // pour_water