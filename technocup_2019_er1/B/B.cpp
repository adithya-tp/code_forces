/*
Iteration 1: 
For given grasshopper location, check if the sum of area of triangles formed by 
grasshopper co-ordinate with each of the four sides of the field is greater than 
area of field. If so, the grasshopper is outside, else inside.
Double inequalities are a pain in the ass.
*/

/*
Iteration 2:
The problem is actually much simpler because the rectangle isn't aribtrary.
The line equations for each side of the rectangle are 
x + y = d, x + y = 2n - d & x - y = d, x - y = -d;
So given a location (x, y), if it satisfies
d <= x + y <= 2n -d, and 
-d <= x - y <= d, 
then the grasshopper is within the field, else no.
*/

#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

double dist(Point a, Point b) {
    return double(sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)));
}

double area(Point a, Point b, Point c) {
    double s = (dist(a, b) + dist(b, c) + dist(c, a)) / 2.0;
    return sqrt(s * (s - dist(a, b)) * (s - dist(b, c)) * (s - dist(c, a)));
}

// Naive double equality is quite error prone.
// This function makes up for that.
bool double_equals(double a, double b, double epsilon = 0.001)
{
    return std::abs(a - b) < epsilon;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    int t;
    cin >> n >> d;
    Point A(0, d);
    Point B(d, 0);
    Point C(n, n - d);
    Point D(n - d, n);
    double rect_area = dist(A, B) * dist(B, C);

    cin >> t;
    int x, y;
    while(t--) {
        cin >> x >> y;
        Point p = Point(x, y);
        double sum_area = area(p, A, B) + area(p, B, C) + area(p, C, D) + area(p, D, A);
        // Nan check coz doubles are muhfuckin crazyy in c pluh pluh
        if(sum_area < rect_area || double_equals(sum_area, rect_area) || isnan(sum_area))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}