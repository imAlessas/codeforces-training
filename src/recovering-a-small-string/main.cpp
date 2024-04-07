/* 
    Author:     @imAlessas
    Problem:    1931A - Recovering a Small String
                https://codeforces.com/problemset/problem/1931/A
*/

#include <bits/stdc++.h>

using namespace std;


// function definition

void disp_lexic_smaller_string(const int&);

map<unsigned char, string> get_lexic_map();



int main() {

    map<unsigned char, string> m = get_lexic_map();

    int t, n;

    cin >> t;

    while(t--){

        cin >> n;

        cout << m[n] << endl;
    }

    return 0;
} // main




// preprocessing approach
// maps all the possibilites into a map <sum, combination>
map<unsigned char, string> get_lexic_map(){

    map<unsigned char, string> m = {};

    unsigned char sum;

    for(char i = 'a'; i <= 'z'; i++)
        for(char j = 'a'; j <= 'z'; j++)
            for(char k = 'a'; k <= 'z'; k++){
                sum = (i - 96) + (j - 96) + (k - 96);

                m.insert({sum, (string(1, i) + string(1, j) + string(1, k))});
            }

    return m;
} // get_lexic_map




// brute force approach
// iterates through every possibility until the sum matches the input
void disp_lexic_smaller_string(const int& n){
    
    unsigned char sum;

    for(char i = 'a'; i <= 'z'; i++)
        for(char j = 'a'; j <= 'z'; j++)
            for(char k = 'a'; k <= 'z'; k++){
                sum = (i - 96) + (j - 96) + (k - 96);

                if(sum == n){
                    cout << i << j << k << endl;
                    return;
                }
            }
    return;

} // disp_lexic_smaller_string
