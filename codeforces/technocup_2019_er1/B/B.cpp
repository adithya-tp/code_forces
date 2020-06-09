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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d, t, x, y;
    cin >> n >> d >> t;
    while(t--) {
        cin >> x >> y;
        if((x + y >= d) && (x + y <= 2 * n - d) && (x - y >= -d) && (x - y <= d))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}