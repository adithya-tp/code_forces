/* Iteration 1:
 * equation Y values we get, X = (q(i) - p(i)) / 2 and 
 * Y = -X + q(i) = X + p(i) = (q(i) + p(i)) / 2
 * 
 * For each q being entered, I check with all p values if X and Y are integers.
 * This approach is correct, but slow (TLE of 4th test case).
 * 
 */
 
 

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, num_pts, int_points;
    long double x, y, q;
    cin >> t;
    while(t--) {
		cin >> num_pts;
		vector<long double> ps(num_pts);
		for(int i = 0; i < num_pts; i++) {
			cin >> ps[i];
		}
		int_points = 0;
		cin >> num_pts;
		for(int i = 0; i < num_pts; i++) {
			cin >> q;
			for(int j = 0; j < (int)ps.size(); j++) {
				x = (q - ps[j]) / 2.0;
				y = x + ps[j];
				if(ceil(x) == x && ceil(y) == y) {
					int_points++;
				}
			}
		}
		cout << int_points << "\n";
    }
    return 0;
}
