/* 
   Author:  @imAlessas
   Problem: 158A - Next Round
            https://codeforces.com/problemset/problem/158/A
*/

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    // input
    int scores[n];
    for(int i = 0; i < n; i++)
        cin >> scores[i];
    
    

    // find advance to next round
    int pivot = scores[k - 1];
    int count = 0;

    for(int i = 0; i < n; i++)
        if(pivot == 0 && scores[i] > pivot)
            count++;
        else if(pivot > 0 && scores[i] >= pivot)
            count++;

    cout << count << endl;

    return 0;
} // main
