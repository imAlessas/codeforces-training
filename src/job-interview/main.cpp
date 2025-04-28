/* 
    Author:     @imAlessas
    Problem:    1976C - Job Interview
                https://codeforces.com/problemset/problem/1976/C
*/

#include <bits/stdc++.h>

using namespace std;


// function definition



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, a, n, m, total, curr_points, n_double, m_double, mismatch;
    vector<int> prog = {}, test = {}, team_points = {};
    vector<pair<int, int>> missing_people = {};

    cin >> t;

    while(t--){
        
        prog.clear();
        test.clear();
        team_points.clear();
        missing_people.clear();


        cin >> n >> m;
        total = n + m + 1;

        for( int i = 0; i < total; i++ ){
            cin >> a;
            prog.push_back(a);
        }
        
        for( int i = 0; i < total; i++ ){
            cin >> a;
            test.push_back(a);
        }
        
        for( int i = 0; i < total; i++ ){
            team_points.push_back(0);
            missing_people.push_back({0, 0});
        }
        

        n_double = n; m_double = m;
        for( int i = 0; i < total - 1; i++ ){
            
            team_points[i] = (i - 1 < 0) ? 0 : team_points[i - 1];

            if( prog[i] > test[i] ) {
                if( n_double ) {
                    team_points[i] += prog[i];
                    n_double--;
                } else {
                    team_points[i] += test[i];
                    m_double--;
                }
            } else {
                if( m_double ) {
                    team_points[i] += test[i];
                    m_double--;
                } else {
                    team_points[i] += prog[i];
                    n_double--;
                }
            }
            
            missing_people[i] = {n_double, m_double};
            mismatch = i;

        }


        // for( int j = 0; j < total; j++ ){

        //     curr_points = (j - 1 < 0) ? 0 : team_points[j - 1];
        //     n_double = (j - 1 < 0) ? n : missing_people[j - 1].first;
        //     m_double = (j - 1 < 0) ? m : missing_people[j - 1].second;
                
        //     for( int i = j + 1; i < total; i++ ){

        //         if( prog[i] > test[i] ) {
        //             if( n_double ) {
        //                 curr_points += prog[i];
        //                 n_double--;
        //             } else {
        //                 curr_points += test[i];
        //                 m_double--;
        //             }
        //         } else {
        //             if( m_double ) {
        //                 curr_points += test[i];
        //                 m_double--;
        //             } else {
        //                 curr_points += prog[i];
        //                 n_double--;
        //             }
        //         }
                
        //     }

        //     cout << curr_points << " ";
        // }

        for( int i = 0; i < total; i++ ){

            

        }

        cout << endl << endl;


    }

    return 0;
} // main
