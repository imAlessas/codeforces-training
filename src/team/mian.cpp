/* 
   Author: @imAlessas
   Problem: https://codeforces.com/problemset/problem/231/A
*/

#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int participants = 3;
    int count = 0;

    int n;
    cin >> n;

    // loop through every test
    for (int i = 0; i < n; i++){
        int tmp = 0, sum = 0;
        
        // gather information about who is sure about the solution
        for (int j = 0; j < participants; j++){
            cin >> tmp;
            sum += tmp;
        }   
        
        if( sum >= 2)
            count ++;
                    
    }
    
    cout << count << endl;

    return 0;
} // main
