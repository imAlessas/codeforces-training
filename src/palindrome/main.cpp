/* 
    Author:     @imAlessas
    Problem:    1952H - Palindrome
                https://codeforces.com/problemset/problem/1952/H
*/

#include <bits/stdc++.h>

using namespace std;


// function definition

void resize(string&, int);

void check_palindrome(const string& s);




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 


    int t;
    string s;

    vector<string> v = {};

    cin >> t;

    for(int i = 0; i < t; i++) {

        cin >> s; 
        
        resize(s, t);

        v.push_back(s);

    }
    

    // iterates through the columns and then through the rows
    for(int i = 0; i < t; i++){
        
        s = "";

        for(int j = 0; j < t; j++)
            if(v[j][i] != ' ')
                s += v[j][i];

        check_palindrome(s);

    }



    return 0;
} // main





// removes or adds characcter from the string s to make it of size t
void resize(string& s, int size){

    if( s.size() > size)
        s.erase(s.begin() + size, s.end());

    if( s.size() < size){
        string padding = "";

        for(int i = s.size(); i < size; i++)
            padding = padding + ' ';

        s += padding;
    }

} // resize



// checks if the string s is palindrome and outputs the verdict
void check_palindrome(const string& s){

    if(!s.size()){
        cout << "YES" << endl;
        return;
    }

    bool flag = true;
    for(int i = 0; i < s.size() / 2 && flag; i++)
        flag = s[i] == s[s.size() - i - 1];

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

} // check_palindrome
