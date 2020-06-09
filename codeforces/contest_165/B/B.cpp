#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int i = n - 1;
	while( i > 0 && v[i - 1] < v[i]) {
		i--;
	}
	cout << i << "\n";
    return 0;
}
