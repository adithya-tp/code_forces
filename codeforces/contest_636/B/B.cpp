/*
 * Iteration 1: (Pure hunch based approach :))
 * If h = n / 2, the sum for the first half is s = h * (h + 1).
 * The target sum after filling all but the last element for 
 * the second half, is (s - pow(h - 1, 2)).
 * If this target sum / last element of second half is even, 
 * then print "NO" else print "YES" and the element vector.
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n, half, sum, target;
    cin >> t;
    while(t--) {
        cin >> n;
        half = n / 2;
        sum = half * (half + 1);
        target = sum - pow(half - 1, 2);
        if(target % 2 == 0)
			cout << "NO\n";
		else {
			vector<int> res;
			for(int i = 0; i < half; i++) {
				res.push_back(2 * (i + 1));
			}
			cout << "YES\n";
			for(int i = 0; i < half - 1; i++) { 
				res.push_back(2 * i + 1);
			}
			res.push_back(target);
			for(int i : res)
				cout << i << " ";	
			cout << "\n";
		}
    }
    return 0;
}
