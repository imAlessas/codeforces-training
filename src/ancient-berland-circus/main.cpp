/* 
   Author:  @imAlessas
   Problem: 1C - Ancient Berland Circus
            https://codeforces.com/problemset/problem/1/C
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

#define point pair<double, double>

// functions definition
point line_intersection(const point&, const point&, const point&, const point&);
point find_circumference_centre(const point&, const point&, const point&);
point midpoint(const point&, const point&);
double distance(const point&, const point&);
double area(const int&, const double&, const double&);

int main() {
    int n = 3;
    vector<point> coords = {};

    string x, y;
    while(n--){
        cin >> x; cin >> y;
        coords.push_back({stod(x), stod(y)});
    }

    point centre = find_circumference_centre(coords[0], coords[1], coords[2]);
    double radius = distance(centre, coords[0]);

    double circumference = 2 * M_1_PI * radius;
    
    double n = 0;

    // cout <<  << endl;

    return 0;
} // main



// returns the centre of a circumference passing in the points a, b, c
point find_circumference_centre(const point& a, const point& b, const point& c){
    // find the midpoint between ab and bc
    point m_ab = midpoint(a, b);
    point m_bc = midpoint(b,c);

    // find intersection between m_ab - c  and  m_bc - a
    return line_intersection(m_ab, c, m_bc, a);

} // find_circumference_centre



// returns the intersection between line a-b and line c-d
point line_intersection(const point& a, const point& b, const point& c, const point& d){
    // Line ab represented as a1x + b1y = c1
    double a1 = b.second - a.second;
    double b1 = a.first - b.first;
    double c1 = a1*(a.first) + b1*(a.second);
 
    // Line CD represented as a2x + b2y = c2
    double a2 = d.second - c.second;
    double b2 = c.first - d.first;
    double c2 = a2*(c.first)+ b2*(c.second);
 
    // finds determinant
    double det = a1*b2 - a2*b1;

    // should always be det > 0
    if(!det)
        return {NULL, NULL};

    // coordinates of the intersection
    double x_intersection = (b2*c1 - b1*c2)/det;
    double y_intersection = (a1*c2 - a2*c1)/det;
    
    return {x_intersection, y_intersection};
} // intersection



// returns the midpoint between a, b
point midpoint(const point& a, const point& b){
    return { (a.first + b.first) / 2 , (a.second + b.second) / 2 };
}



// returns the distance between a, b
double distance(const point& a, const point& b){
    return sqrt( pow(a.first - b.first, 2) + pow(a.second - b.second, 2) );
}



// returns the area of a generic regular polygon
double area(const int& sides, const double& side_length, const double& apothem){
    return sides / 2 * side_length * apothem;
}














// side_length of a n-sided polygon:  2 * radius * sin( 180/n ) 

/*
    Idea:
    try to do brute force for every number of sides (n) from 3 to 100 (max number given in the guidelines). Start building the polygon by dividing the circumference into the i sides, calculating the sides lengt and start building the polygon from the 1st point. In the for loop, see if the othe point (b and c) are points of the polygon, if not, re-do by increasing the number of sydes by one.

    To add a side from a point, it is important to know its length an intersect it with the outer circumference. There are two intersection. By having something like this: Pn-1 ----- Pn ----- Pn+1, the right point is pn+1 becaus Pn-1 was already inside the set of points,
*/




/*
Test number two is:

71.756151   7.532275
-48.634784  100.159986
91.778633   158.107739

9991.27897663
*/