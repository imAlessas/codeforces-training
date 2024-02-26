/* 
   Author:  @imAlessas
   Problem: 1931C - Make Equal Again
            https://codeforces.com/problemset/problem/1931/C
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void make_equal_again(const vector<int>&);

int main() {
    int t, n, m, a, max_value;
    cin >> t;

    vector<int> v = {};

    while(t--){
        cin >> n;
        int m = n;

        // inserts into vector
        while(n--){
            cin >> a;
            v.push_back(a);       
        }

        make_equal_again(v);
        
        v.clear();
    }

    return 0;
} // main


// performs the calculations needed
void make_equal_again(const vector<int>& v){
    int size = v.size();

    if(size == 1){
        cout << 0 << endl;
        return;
    }

    int i = 0;
    int j = size - 1;

    if(v[i] == v[j]){
        // scans vector from both the sides
        while(v[i] == v[i + 1])
            i++;

        while(v[j] == v[j - 1])
            j--;
        
        // case whene the vector ha the same values (the two index overlaps)
        if (j - (i + 1) < 0){
            cout << 0 << endl;
            return;
        }

        cout << j - (i + 1) << endl;
        return;
    }

    // counts the number of equal symbols from both the sides
    while(v[i] == v[i + 1])
        i++;

    while(v[j] == v[j - 1])
        j--;

    
    if (i > (size - 1 - j)){
        cout << size - 1 - i << endl;
        return;
    }

    cout << j << endl;
    return;
} // make_equal_again