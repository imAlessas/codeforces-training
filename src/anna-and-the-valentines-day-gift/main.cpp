/* 
   Author:  @imAlessas
   Problem: 1931E - Anna and the Valentine's Day Gift
            https://codeforces.com/problemset/problem/1931/E
*/

#include <bits/stdc++.h>

using namespace std;

// function definition
pair<int, int> find_two_max_index(const vector<int>&);

int main() {
    int t, n, m, a;
    cin >> t;

    vector<int> v = {};
    pair<int, int> max_idx = {};

    while (t--){
        cin >> n >> m;

        while(n--){
            cin >> a;
            v.push_back(a);
        }

        while(v.size() > 1){
            // Anna's turn
            // TODO



            // Sasha's turn
            // find the two maximum numbers and merge them by comparing the first digit
            max_idx = find_two_max_index(v);
            v[max_idx.first] = merge_numbers(v[max_idx.first], v[max_idx.second]);
            v.erase(v.begin() + max_idx.second);
        }

        if(log10(v[0]) >= m)
            cout << "Sasha" << endl;
        else
            cout << "Anna" << endl;
    }
    

    return 0;
} // main


// returns indexes of the two greatest numbers in the array
pair<int, int> find_two_max_index(const vector<int>& v){
    int n = v.size();
    if(n == 1)
        return {v[0], 0};

    pair<int, int> max_index = {0, 0};
    for(int i = 0; i < n; i++){
        if(v[i] >= v[max_index.first]){
            max_index.second = max_index.first;
            max_index.first = i;
        }
    }
    return max_index;
} // find_two_max_index


// merges two numbers into the biggets they can create
int merge_numbers(const int& a, const int& b){
    string a_string = a + "";
    string b_string = b + "";

    if(stoi(a_string[0] + "") > stoi(b_string[0] + ""))
        return stoi(a_string + b_string);

    return stoi(b_string + a_string);
} // merge_numbers