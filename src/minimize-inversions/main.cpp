/* 
   Author:  @imAlessas
   Problem: 1918B - Minimize Inversions
            https://codeforces.com/problemset/problem/1918/B
*/

#include <bits/stdc++.h>

using namespace std;

// function definition
void double_merge_sort(vector<int>&, vector<int>&);

int main() {
    int t, n, i;
    vector<int> a, b;

    cin >> t;

    while(t--){
        a = {}; b = {};

        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> i;
            a.push_back(i);
        }

        for(int j = 0; j < n; j++){
            cin >> i;
            b.push_back(i);
        }

        // b contains all the inversions
        double_merge_sort(a, b);

        for(int i : a)
            cout << i << " ";
        cout << endl;

        for(int i : b)
            cout << i << " ";
        cout << endl;        
    }

    return 0;
} // main

// this modified merge sort, sorts a and make the same changes in b without sorting it
// merge_sort uses a DIVIDE & CONQUER approach where devides sorting problems into few O(1) problem and the merges the sorted unities together
void double_merge_sort(vector<int>& a, vector<int>& b){
    if(a.size() < 2)
        return;

    int middle = a.size() / 2;

    // vector a
    vector<int> left_a(a.begin(), a.begin() + middle);
    vector<int> right_a(a.begin() + middle, a.end());

    // vector b
    vector<int> left_b(b.begin(), b.begin() + middle);
    vector<int> right_b(b.begin() + middle, b.end());
    
    // start dividing
    double_merge_sort(left_a, left_b);
    double_merge_sort(right_a, right_b);

    // start merging
    int idx = 0, l_idx = 0, r_idx = 0;

    while(l_idx < left_a.size() && r_idx < right_a.size()){
        if(left_a[l_idx] < right_a[r_idx]){
            a[idx] = left_a[l_idx];
            b[idx] = left_b[l_idx];
            idx++; l_idx++;
        } else {
            a[idx] = right_a[r_idx];
            b[idx] = right_b[r_idx];
            idx++; r_idx++;
        }
    } 

    while(l_idx < left_a.size()){
        a[idx] = left_a[l_idx];
        b[idx] = left_b[l_idx];
        idx++; l_idx++;
    }  

    while(r_idx < right_a.size()){
        a[idx] = right_a[r_idx];
        b[idx] = right_b[r_idx];
        idx++; r_idx++;
    }
} // double merge sort
