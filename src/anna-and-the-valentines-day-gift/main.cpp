/* 
   Author:  @imAlessas
   Problem: 1931E - Anna and the Valentine's Day Gift
            https://codeforces.com/problemset/problem/1931/E
*/

#include <bits/stdc++.h>

using namespace std;


// function definition

int count_zeros(const string&);

int max_index(const vector<string>&);

int get_max_zeros_index(const vector<string>&);

string merge_numbers(const string&, const string&);

void reverse_number(string&);

void print_vector(const vector<string>& v){
    
    cout << "vector = [ ";

    for(string a : v)
        cout << a << " ";

    cout << "]" << endl;
}





int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 


    int t, n, m;
    string a, tmp;

    vector<string> v = {};
    int zeros_idx, max_idx;

    cin >> t;

    while (t--){
        v.clear();

        cin >> n >> m;

        while(n--){
            cin >> a;
            v.push_back(a);
        }

        while(v.size() > 1){

            // Anna's turn
            zeros_idx = get_max_zeros_index(v);
            reverse_number(v[zeros_idx]);

            // Sasha's turn
            zeros_idx = get_max_zeros_index(v);
            tmp = v[zeros_idx];
            v.erase(v.begin() + zeros_idx);

            max_idx = max_index(v);
            v[max_idx] = merge_numbers(tmp, v[max_idx]);

        }

        // last Anna's turn
        zeros_idx = get_max_zeros_index(v);
        reverse_number(v[zeros_idx]);


        if(v[0].size() > m)
            cout << "Sasha"<< endl;
        else
            cout << "Anna"<< endl;
    }
    

    return 0;
} // main





// gets the index of the number with the max trailing zeros
int get_max_zeros_index(const vector<string>& v){

    int max_zero_index = 0;

    for(int i = 1; i < v.size(); i++)
        if( count_zeros( v[i] ) > count_zeros( v[max_zero_index] ) )
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
void reverse_number(string& s){
    
    reverse(s.begin(), s.end());

    auto it = s.begin();
    while (it != s.end() && *it == '0') 
        it++;
    
     s.erase(s.begin(), it);

} // reverse_number



// returns indexes of the number with max zeros at the end and the max number
int max_index(const vector<string>& v){

    int max_index = 0;

    for(int i = 1; i < v.size(); i++)
        if( v[i].size() > v[max_index].size() )
            max_index = i;
    

    return max_index;

} // find_two_max_index



// merges two numbers
string merge_numbers(const string& zeros, const string& max){

    return zeros + max;

} // merge_numbers
