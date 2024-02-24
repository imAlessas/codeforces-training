/* 
   Author:  @imAlessas
   Problem: 1B - Spreadsheets
            https://codeforces.com/problemset/problem/1/B
*/

#include <iostream>
#include <regex>    // need it for the patterns
#include <string>   // need for string find
#include <cmath>    // need fpr pow() function


using namespace std;

// functions definition
bool is_row_col(const string&);

void row_col_to_excel_format(string&);
string num_to_col(int, int);
char num_to_letter(int);

void excel_format_to_row_col(string&);
int col_to_num(const string&);
int letter_to_num(char);


int main() {
    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        // Let:
        // - row_col notation be RnCm
        // - excel_format notation be An
        if(is_row_col(s))
            row_col_to_excel_format(s);
        else    
            excel_format_to_row_col(s);

        cout << s << endl;
    }


    return 0;
} // main



// checks the format of the coordinate
bool is_row_col(const string& s){
    /*  define pattern as R%C% where % is an undefined sequence of number
        important to set it static const to drastically improve the time complexity:
        - with static const: ~ 964ms
        - without static const: > 10000ms */
    static const regex pattern("^R\\d+C\\d+$");
    return regex_match(s, pattern);
} // is_row_col



// performs R21C32 -> AF21 conversion
void row_col_to_excel_format(string& s){
    int pos_C = s.find("C");

    // isolate row value and col value
    int col = stoi(s.substr(pos_C + 1, s.size() - 1));
    string row = s.substr(1, pos_C - 1); // no need to convert to int

    // convert columns
    string col_letter = num_to_col(col / 26, col % 26);

    s = col_letter + row;
    
} // row_col_to_excel_format


// recursive function that converts the number n into excel format
string num_to_col(int res, int rem){
    if (rem == 0 && res == 0)
        return "";

    if (res == 0)
        return string(1, num_to_letter(rem));

    if (rem == 0) {
        res--; // adjust res to handle 'Z' case
        rem = 26; // set rem to 26 for 'Z'
    }
    
    return num_to_col(res / 26, res % 26) + num_to_letter(rem);
    
} // num_to_col


// converts a number 1-26 to its respective alphabet letter
// A -> 1, ..., I -> 9, ..., Z -> 26 
char num_to_letter(int num){
    return (num + 64);
} // num_to_letter



// performs AF21 -> R21C32 conversion
void excel_format_to_row_col(string& s){
    int first_number = s.find_first_of("0123456789");

    // isolate row value and col value
    string col = s.substr(0, first_number);
    string row = s.substr(first_number, s.length() - 1);

    // convert columns
    int col_num = col_to_num(col);

    s = "R" + row + "C" + to_string(col_num);

} // excel_format_to_row_col 


int col_to_num(const string& s){
    int col_num = 0;
    int length = s.length();

    for(int i = 0; i < length; i++)
        col_num = col_num * 26 + letter_to_num(s[i]);

    return col_num;
}


// converts a character A-Z to its respective index in the alphabet
// A -> 1, ..., I -> 9, ..., Z -> 26 
int letter_to_num(char letter){
    return letter - 64;
} // letter_to_num


