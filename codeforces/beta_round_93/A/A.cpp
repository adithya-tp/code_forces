#include <bits/stdc++.h>
using namespace std;

typedef complex<int> pt;
#define x real()
#define y imag()
double distance(pt p1, pt p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, c1, c2;
    pt p1, p2;
    double time = 0;
    cin >> n >> k;
    cin >> c1 >> c2;
    p1 = pt{c1, c2};
	for(int i = 0; i < n - 1; i++) {
		cin >> c1 >> c2;
		p2 = pt{c1, c2};
		time += distance(p1, p2) / 50.0;
		p1 = p2;
	}
	cout << fixed << setprecision(10) << k * time << "\n";
    return 0;
}
