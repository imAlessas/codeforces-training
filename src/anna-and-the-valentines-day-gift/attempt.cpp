/* 
   Author:  @imAlessas
   Problem: 1931E - Anna and the Valentine's Day Gift
            https://codeforces.com/problemset/problem/1931/E
*/

#include <bits/stdc++.h>

using namespace std;


// function definition

int count_zeros(const string&);

void remove_trailing_zeros(pair<string, int>&);

void print_vector(vector<pair<string, int>>& v){
    
    cout << "vector = [ \n";

    for(pair<string, int> a : v)
        cout << "   { " << a.first << "  " << a.second << " }\n";

    cout << "];" << endl;
}





int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 


    int t, n, m;
    string a, final;

    pair<string, int> reversed;
    vector<pair<string, int>> v = {};

    cin >> t;

    while (t--){
        v.clear();
        final = "";

        cin >> n >> m;

        while(n--){
            cin >> a;
            v.push_back({a, count_zeros(a)});
        }

        sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
                return a.second < b.second;
        });


        while(v.size() > 1 && final.size() <= m){
            
            // Anna's turn
            remove_trailing_zeros(v[v.size() - 1]);

            // Sasha's turn
            reversed = v.back();
            v.pop_back();

            final = final + v.back().first + reversed.first;            
            v.pop_back();
        }
            
        if(!m || final.size() > m)
            cout << "Sasha"<< endl;
        else
            cout << "Anna"<< endl;
    }
    

    return 0;
} // main





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



// given a number n this function removes the trailing zeros
void remove_trailing_zeros(pair<string, int>& p){

    string& s = p.first;
    
    int i;
    for (i = s.size() - 1; i >= 0; i--) {
        if (s[i] != '0') {
            break;
        }
    }
    
    s = s.substr(0, i + 1);
    
    p.second = 0;

} // remove_trailing_zeros

