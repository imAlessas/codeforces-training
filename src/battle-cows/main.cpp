/* 
    Author:     @imAlessas
    Problem:    1951B - Battle Cows
                https://codeforces.com/problemset/problem/1951/B
*/

#include <bits/stdc++.h>

using namespace std;


/* Function definition */

vector<int> get_wins(const vector<int>&);

vector<int> swap(const vector<int>&, int, int);

int count_target(const vector<int>&, int);





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k, tmp, j, target, count;
    vector<int> a, wins;

    cin >> t; 

    while(t--) {
        a.clear();
        wins.clear();

        cin >> n >> k;
        k--;  // Convert 1-based index to 0-based for array access

        while(n--) {
            cin >> tmp;
            a.push_back(tmp);
        }

        target = a[k];  // Target element at index `k`
        wins = get_wins(a);


        /* Find maximum number of times target appears in win sequences */

        count = 0;

        // Find the first position where value is greater than target
        j = 0;
        while(j < a.size() && target >= a[j])
            j++;

        // Check if target appears as the maximum win
        if (wins.back() != target) {

            // Compare target count from two swap scenarios
            count = max(
                count_target( get_wins( swap(a, 0, k) ), target ),
                count_target( get_wins( swap(a, j, k) ), target )
            );

        } else
            count = wins.size();


        cout << count << endl << endl;
    }

    return 0;

} // main




// Returns a vector of wins of length a.size() - 1
vector<int> get_wins(const vector<int>& a) {

    vector<int> wins = {};

    // First win is the max of the first two elements
    wins.push_back(a[0] > a[1] ? a[0] : a[1]);

    // Populate wins with the max of current element or last win
    for(int i = 2; i < a.size(); i++)
        wins.push_back(a[i] > wins[i - 2] ? a[i] : wins[i - 2]);

    return wins; 
} // get_wins



// Returns a copy of vector `a` with elements at indices `i` and `k` swapped
vector<int> swap(const vector<int>& a, int i, int k) {

    vector<int> v = a;  // Copy input vector `a` to `v`

    if (i == k)
        return v;

    // Swap elements at `i` and `k` using XOR
    v[i] = v[i] ^ v[k];
    v[k] = v[i] ^ v[k];
    v[i] = v[i] ^ v[k];

    return v;
} // swap



// Returns the count of occurrences of `t` in vector `w`
int count_target(const vector<int>& w, int t) {

    int count = 0;

    // Increment count for each occurrence of `t` in `w`
    for(int item : w)
        if(t == item)
            count++;

    return count;
} // count_target
