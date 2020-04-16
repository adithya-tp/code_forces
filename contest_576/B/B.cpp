/*Iteration 1:
 * Looking at the figure we realize that the distance from A to H 
 * is the same as distance from A to L. 
 * that is, A + H = sqrt(A^2 + L^2) => solve for A.
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double h, l;
    cin >> h >> l;
    cout << fixed << setprecision(10) << (pow(l, 2) - pow(h, 2)) / (2 * h) << "\n";
    return 0;
}
