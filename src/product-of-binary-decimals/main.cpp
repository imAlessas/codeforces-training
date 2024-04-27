/* 
    Author:     @imAlessas
    Problem:    1950D - Product of Binary Decimals
                https://codeforces.com/problemset/problem/1950/D
*/

#include <bits/stdc++.h>

using namespace std;

// function definition

vector<int> get_all_binary_decimals(const int&);


bool check_product(const int&, const vector<int>&, const int&);



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    // pre-processing
    vector<int> bin_dec = get_all_binary_decimals(5 * 100000);


    int t, n;

    cin >> t;

    while(t--){

        cin >> n;

        if( check_product(n, bin_dec, 0 ) )
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;

    }

    return 0;
} // main





// checks if the number can be written as a prduct of binary decimals
bool check_product(const int& n, const vector<int>& bin_dec, const int& idx){

    if(n == 1)
        return true;

    for(int i = idx; i < bin_dec.size() - 1; i++){

        if( !(n % bin_dec[i]) )
            if( check_product(n / bin_dec[i], bin_dec, i) )
                return true;
        

    }

    return false;
} // check_product





// calculates all the binary decimals from 1 to upper_limit
vector<int> get_all_binary_decimals(const int& upper_limit){

    vector<int> binary_decimals = {};
    int current;
    bool flag;

    for(int i = upper_limit; i > 0 ; i--){
        current = i;
        flag = true;

        while(current){
            if( current % 10 > 1){
                flag = false;
                break;
            }
            current = current / 10;
        }

        if(flag)
            binary_decimals.push_back(i);
    }

    return binary_decimals;
} // get_all_binary_decimals
