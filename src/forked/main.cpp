/* 
    Author:     @imAlessas
    Problem:    1904A - Forked!
                https://codeforces.com/problemset/problem/1904/A
*/

#include <bits/stdc++.h>

using namespace std;

// function definition
set<pair<long long, long long>> get_hits(const pair<long long, long long>&, const pair<long long, long long>&);


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, count;
    pair<long long, long long> knight, queen, king;
    set<pair<long long, long long>> queen_hits, king_hits;

    cin >> t;

    while(t--){

        queen_hits = {};
        king_hits = {};
        count = 0;

        cin >> knight.first >> knight.second >> queen.first >> queen.second >> king.first >> king.second;

        queen_hits = get_hits(knight, queen);
        king_hits = get_hits(knight, king);

        for(const auto& q : queen_hits)
            for(const auto& k : king_hits)
                if( q.first == k.first &&  q.second == k.second)
                    count++;

        
        cout << count << endl;
    }

    return 0;
} // main



/*
    returns a vector containig the max 8 possible tiles where the higher-value piece h can be hit by the knight k.
    It is the same as doing but it's cooler

        v.insert( {h.first + k.first, h.second + k.second} ); // up - right
        v.insert( {h.first + k.first, h.second - k.second} ); // up - left
        v.insert( {h.first - k.first, h.second + k.second} ); // down - right
        v.insert( {h.first - k.first, h.second - k.second} ); // down - left
    
        // change sides
        v.insert( {h.first + k.second, h.second + k.first} ); // up - right 
        v.insert( {h.first + k.second, h.second - k.first} ); // up - left
        v.insert( {h.first - k.second, h.second + k.first} ); // down - right
        v.insert( {h.first - k.second, h.second - k.first} ); // down - left
*/
set<pair<long long, long long>> get_hits(const pair<long long, long long>& k, const pair<long long, long long>& h) {
    
    set<pair<long long, long long>> v;

    long long x, y, delta_x, delta_y;

    for (int a = 0; a < 2; a++) {

        x = (a % 2) ? k.first : k.second;
        y = (a % 2) ? k.second : k.first;

        for (int b = 0; b < 2; b++) {

            delta_x = (b % 2) ? x : -x;

            for(int c = 0; c < 2; c++){

                delta_y = (c % 2) ? y : -y;

                v.insert({h.first + delta_x, h.second + delta_y});
            }

        }
    }

    return v;

} // get_hits
