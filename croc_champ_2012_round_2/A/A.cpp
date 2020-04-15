/*Iteration 1:
 * Find the respective row and col that contain a single star.
 * This is your fourth point.
 * 
 * Iteration 2:
 * I'd like to solve this using complex numbers.
 */
#include <bits/stdc++.h>
using namespace std;
 
typedef complex<int> pt;
#define r real()
#define c imag()
ostream& operator<<(ostream& os, pt p) {
	 return os << p.r << " " << p.c << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    vector<pt> pts;
    char ch;
	cin >> m >> n;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> ch;
			if(ch == '*')
				pts.push_back(pt{i+1, j+1});
		}
	}
	if(pts[0].r == pts[1].r){
		if(pts[1].c == pts[2].c)
			cout << pts[2] + pts[0] - pts[1];
		else
			cout << pts[2] + pts[1] - pts[0];
	}
	else {
		if(pts[0].c == pts[1].c)
			cout << pts[0] + pts[2] - pts[1];
		else
			cout << pts[0] + pts[1] - pts[2];
	}
	return 0;
}
