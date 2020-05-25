#include <bits/stdc++.h>
using namespace std;
typedef complex<int> pt;
#define x real()
#define y imag()
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
    sort(v.begin(), v.end(), greater<int>());
    int start = 0, end = n - 1;
    pt p(0, 0);
    while(start <= end) {
		pt hor(0, v[start]);
		p += hor;
		start++;
		if(start <= end) {
			pt ver(v[end], 0);
			p += ver;
		}
		end--;
	}
	long long int res = pow(p.x, 2) + pow(p.y, 2);
	cout << res << "\n";
    return 0;
}
