/* 
   Author: @imAlessas
   Problem: https://codeforces.com/problemset/problem/71/A
*/

#include <iostream>
using namespace std;

// Function declaration
string abbreviate_string(string& s);

int main() {
    int n;
    cin >> n;

    string words[n];

    // Inputting strings
    for (int i = 0; i < n; i++)
        cin >> words[i];
        
    // Outputting abbreviated strings
    for (int i = 0; i < n; i++)
        cout << abbreviate_string(words[i]) << endl;

    return 0;
} // main



// Function to abbreviate string
string abbreviate_string(string& s){
    int string_size = s.size();
    if(string_size > 10)
        return s[0] + to_string(string_size - 2) + s[string_size - 1];
    
    return s;
} // abbreviate_string
