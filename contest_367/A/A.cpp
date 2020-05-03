#include <bits/stdc++.h>
using namespace std;
typedef complex<double> pt;
#define x real()
#define y imag()

double dist(pt a, pt b) {
	return sqrt(pow((a.x - b.x), 2.0) + pow((a.y - b.y), 2.0));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pt> taxis;
    vector<double> vel;
    pt b;
    int r, c, num, v;
    double ans = 1000000.0; 
    cin >> r >> c;
    b = pt(r, c);
    cin >> num;
    while(num--) {
		cin >> r >> c >> v;
		taxis.push_back(pt(r, c));
		vel.push_back(v);
	}
	for(int i = 0; i < int(taxis.size()); i++) {
		double time = dist(taxis[i], b) / vel[i];
		if(time < ans)
			ans = time;
	}
	cout << setprecision(10) << ans << "\n";
    return 0;
}
