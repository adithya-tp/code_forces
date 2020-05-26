#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, osc, start;
    cin >> t;
    while(t--) {
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		start = (n - 1) / 2;
		osc = 1;
		cout << v[start] << " ";
		while((start + osc) < n || (start - osc) >= 0) {
			if((start + osc) < n) {
				cout << v[start + osc] << " ";
			}
			if((start - osc) >= 0) {
				cout << v[start - osc] << " ";
			}
			osc++;
		}
		cout << "\n";
    }
    return 0;
}
