/*
 * Iteration 1: Its best to think of when n1 0 vs when its not.
 * When it is 0, pretty straight forward, print either n0 + 1 0s or 
 * n2 + 1 1s.
 * 
 * Else
 * We print [010...] or [101...] till we reach n1 + 1 (write it out).
 * Say we use [101...]
 * Now we just need to fill in n0 0s (not n0 + 1) at index 1 (first zero) and
 * n2 1s (not n0 + 1) at index 0 (first one).
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n0, n1, n2;
    cin >> t;
    while(t--) {
        cin >> n0 >> n1 >> n2;
        vector<int> bs;
        if(n1) {
			for(int i = 0; i < n1 + 1; i++) {
				if(i & 1)
					bs.push_back(0);
				else
					bs.push_back(1);
			}
			for(int i = 0; i < n0; i++) {
				bs.insert(bs.begin() + 1, 0);
			}
			for(int i = 0; i < n2; i++) {
				bs.insert(bs.begin(), 1);
			}
		}
		else {
			if(n0)
				for(int i = 0; i < n0 + 1; i++) {
					bs.push_back(0);
				}
			if(n2)
				for(int i = 0; i < n2 + 1; i++) {
					bs.push_back(1);
				}
		}
		for(int i : bs)
			cout << i;
		cout << "\n";
    }
    return 0;
}
