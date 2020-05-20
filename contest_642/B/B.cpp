#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, sum, n, k, temp;
    cin >> t;
    while(t--) {
		sum = 0;
		cin >> n >> k;
		vector<int> a(n);
		vector<int> b(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
			cin >> b[i];
		while(k--) {
			sort(a.begin(), a.end());
			sort(b.begin(), b.end(), greater<int>());
			if(b[0] > a[0]) {
				temp = a[0];
				a[0] = b[0];
				b[0] = temp;
			}
		}
		for(int i : a)
			sum += i;
		cout << sum << "\n";
    }
    return 0;
}
