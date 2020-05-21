#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
	for(int i = 0; i < 1e4; i++) {
		a *= 10;
		if(a / b == c) {
			cout << i + 1 << "\n";
			return 0;
		}
		a %= b;
	}
	cout << "-1\n";
    return 0;
}
