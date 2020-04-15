/* Iteration 1:
 * Find the element with the max squared distance.
 * The final answer is just the sum of coordinates of this max point.
 * 
 * Iteration 2:
 * My eagerness to solve the problem using "<complex>" made me overlook 
 * the simpler solution. Iteration 1 would work with the simpler sum of 
 * coordinates rather than the squared distance (since we are just dealing 
 * with the first quadrant). The answer is simply the max sum seen so far.
 * 
 * For both approaches the reason why we simply sum the coordinates is because 
 * we are trying to find 'c' in (a / c) + (b / c) = 1. Solving for 'c', this
 * is just a + b, ie, the sum of the coordinates. Obviously, we want to find the c
 * for the point that's furthest away from the origin.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
	cin >> n;
	long long max_d = INT_MIN;
	while(n--) {
		cin >> a >> b;
		max_d = max_d > a + b ? max_d : a + b;
    }
    cout << max_d << "\n";
    return 0;
}
