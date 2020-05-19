#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    cin >> n;
    vector<int> v(2 * n);
    for(int i = 0; i < 2 * n; i++) {
		cin >> v[i];
	}
	int elem, res = 0;
	while(!v.empty()) {
		d = 1;
		elem = v[0];
		for(int i = 1; i < int(v.size()); i++) {
			if(v[i] == elem) {
				res += d - 1;
				v.erase(v.begin() + d);
				v.erase(v.begin());
				break;
			}
			d++;
		}
	}
	cout << res << "\n";
	return 0;
}
