#include <bits/stdc++.h>
#include <complex>

#define x real()
#define y imag()
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
#define for1(i, n) for(int i = 1; i < (int)(n); i++)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; i--)
#define fore(i, a, t) for(int i = (int)(a); i <= (int)(b); i++)
#define PI 3.141592653589793238463

using namespace std;

typedef complex<double> pt;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.precision(10);
	cout << fixed;
	int n, r0, c0, r, c;
	bool slope_err = false;
	cin >> n >> r0 >> c0;
	pt o(r0, c0);
	set<double> angles;
	forn(i, n) {
		cin >> r >> c;
		pt p(r, c);
		if(p.x - o.x == 0)
			slope_err = true;
		else {
			double slope = (p.y - o.y) / (p.x - o.x);
			angles.insert(slope);
		}
	}
	if(slope_err)
		cout << angles.size() + 1<< "\n";
	else
		cout << angles.size() << "\n";
	return 0;
}
