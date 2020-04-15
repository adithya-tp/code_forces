/* Iteration 1:
 * Find the element with the max squared distance.
 * The final answer is just the sum of coordinates of this max point.
 */

#include <bits/stdc++.h>
using namespace std;

typedef complex<int> pt;
#define x real()
#define y imag()
long long int distance_without_root(pt p) {
	return p.x * p.x + p.y * p.y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
	cin >> n;
	long long max_d = INT_MIN;
	pt max_pt{0,0};
	while(n--) {
		cin >> a >> b;
		pt p{a, b};
		long long int d = distance_without_root(p);
		if(d > max_d) {
			max_pt = p;
			max_d = d;
		}		
    }
    cout << max_pt.x + max_pt.y << "\n";
    return 0;
}
