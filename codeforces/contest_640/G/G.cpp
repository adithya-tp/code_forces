/*
 * Solution: If n > 3, print all odd numbers in decreasing order. Print 4 and 2.
 * 			 And finally print all even numbers in increasing order.
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--) {
		cin >> n;
		if(n < 4) {
			cout << "-1\n";
			continue;
		}
		vector<int> res(n);
		for(int i = n; i > 0; i--) {
			// cool way to check if a number is odd
			if(i & 1)
				cout << i << " ";
		}
		cout << "4 2 ";
		for(int i = 6; i <= n; i+=2) {
			cout << i << " ";
		}
		cout << "\n";
    }
    return 0;
}
