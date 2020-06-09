/* Iteration 1:
 * We've got three cases:
 * When we've got a perfect square.
 * When we're more closer to the lower perfect square.
 * When we're more closer to the upper perfect square.
 * The rest is just drawing a couple examples a finding a pattern.
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int nearest_square = floor(sqrt(n));
    if(n - pow(nearest_square, 2) == 0)
		cout << 4 * nearest_square << "\n";
    else if(n - pow(nearest_square, 2) > nearest_square)
		cout << 4 * nearest_square + 4 << "\n";
	else
		cout << 4 * nearest_square + 2 << "\n";
    return 0;
}
