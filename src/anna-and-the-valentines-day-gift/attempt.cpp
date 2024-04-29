/* 
   Author:  @imAlessas
   Problem: 1931E - Anna and the Valentine's Day Gift
            https://codeforces.com/problemset/problem/1931/E
*/

#include <bits/stdc++.h>

using namespace std;


// function definition

int count_zeros(const string&);

int max_index(const vector<pair<string, int>>&);

int get_max_zeros_index(const vector<pair<string, int>>&);

int get_max_zeros_index_except(const vector<pair<string, int>>&, int);

string merge_numbers(const string&, const string&);

void reverse_number(pair<string, int>&);

void print_vector(vector<pair<string, int>>& v){
    
    cout << "vector = [ \n";

    for(pair<string, int> a : v)
        cout << "{ " << a.first << "  " << a.second << " }\n";

    cout << "]" << endl;
}

void sort_by_str_size(vector<pair<string, int>>& v) {
    int n = v.size();
    pair<string, int> key;

    for (int i = 1; i < n; i++) {
        key = v[i];
        int j = i - 1;

        while (j >= 0 && key.first.length() > v[j].first.length()) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 


    int t, n, m;
    string a, tmp;

    vector<pair<string, int>> v = {};
    int zeros_idx, max_idx;

    cin >> t;

    while (t--){
        v.clear();

        cin >> n >> m;

        while(n--){
            cin >> a;
            v.push_back({a, count_zeros(a)});
        }


        while(v.size() > 1){
            
            // Anna's turn
            zeros_idx = get_max_zeros_index(v);
            reverse_number(v[zeros_idx]);

            // Sasha's turn
            zeros_idx = get_max_zeros_index_except(v, 0);
            tmp = v[zeros_idx].first;
            v.erase(v.begin() + zeros_idx);

            a = merge_numbers(tmp, v[0].first);
            v[0] = {a, count_zeros(a)};

             sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
                return a.first.size() > b.first.size();
            });
        }

        // last Anna's turn
        zeros_idx = get_max_zeros_index(v);
        reverse_number(v[zeros_idx]);

        if(v[0].first.size() > m)
            cout << "Sasha"<< endl;
        else
            cout << "Anna"<< endl;
    }
    

    return 0;
} // main





// gets the index of the number with the max trailing zeros
int get_max_zeros_index(const vector<pair<string, int>>& v){

    int max_zero_index = 0;

    for(int i = 0; i < v.size(); i++)
            if( v[i].second > v[max_zero_index].second )
                max_zero_index = i;
    
    return max_zero_index;

} // get_max_zeros_index



// gets the index of the number with the max trailing zeros, except if is in the position p
int get_max_zeros_index_except(const vector<pair<string, int>>& v, int p){

    int max_zero_index = v.size() - 1 - p;

    for(int i = 0; i < v.size(); i++)
        if( v[i].second > v[max_zero_index].second && i != p)
            max_zero_index = i;
    
    return max_zero_index;

} // get_max_zeros_index



// counts the number of trailing zeros of a number n 
int count_zeros(const string& s){
    
    int count = 0;

    for(int i = s.size() - 1; i > 0; i--)
        if( s[i] == '0' )
            count++;
        else
            break;

    return count;
} // count_zeros



// given a number n: a0, a1, ..., aN; this function return the reverse of that number: aN, a(N - 1), ..., a0
void reverse_number(pair<string, int>& s){
    
    reverse(s.first.begin(), s.first.end());

    auto it = s.first.begin();
    while (it != s.first.end() && *it == '0') 
        it++;
    
    s.first.erase(s.first.begin(), it);
    s.second = count_zeros(s.first);

} // reverse_number



// returns indexes of the number with max zeros at the end and the max number
int max_index(const vector<pair<string, int>>& v){

    int max_index = 0;

    for(int i = 1; i < v.size(); i++)
        if( v[i].first.size() > v[max_index].first.size() )
            max_index = i;
    

    return max_index;

} // find_two_max_index



// merges two numbers
string merge_numbers(const string& a, const string& b){

    if(count_zeros(a) > count_zeros(b))
        return a + b;
    else
        return b + a;

} // merge_numbers
