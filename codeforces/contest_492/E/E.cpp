#include <bits/stdc++.h>
using namespace std;
typedef complex<int> pt;
#define x real()
#define y imag()

double mag(pt p) {
	return sqrt(pow(p.x, 2) + pow(p.y, 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, r, c;
    cin >> t;
    vector<pt> points;
    while(t--) {
		cin >> r >> c;
        points.push_back(pt(r, c));
    }
    double max = 1.5 * pow(10, 6);
    pt curr(0,0);
    for(int i = 0; i < int(points.size()); i++) {
		pt p = curr + points[i];
		if(mag(p) <= max) {
			cout << "1 ";
			curr = p;
		}
		else {
			cout << "-1 ";
			curr = curr - points[i];
		}
	}
	cout << "\n";
    return 0;
}
