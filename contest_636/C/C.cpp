/*
 * Iteration 1: Find all contiguous subsegments with the same sign.
 * Then, simply sum up the maximum value from each subsegment to get to your answer.
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n, sum, max_num, curr_sign;
    cin >> t;
    while(t--) {
		sum = 0;
        cin >> n;
        vector<long long int> a(n);
        for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			max_num = INT_MIN;
			curr_sign = int(a[i] / abs(a[i]));
			while(int(a[i]/abs(a[i])) == curr_sign && i < n) {
				max_num = max(max_num, a[i]);
				i++;
			}
			sum += max_num;
			i--;
		}
		cout << sum << "\n";
    }
    return 0;
}
