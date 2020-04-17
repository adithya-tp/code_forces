/* Iteration 1:
 * Sort and sliding window of size 3 for triangle feasiblity test.
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<long long int> v(t);
    for(int i = 0; i < t; i++) {
		cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i <= t - 3; i++) {
		if(v[i] + v[i+1] > v[i+2] && v[i+1] + v[i+2] > v[i] && v[i+2] + v[i] > v[i+1]){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
    return 0;
}
