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

using namespace std;

typedef complex<long long int> pt;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;

long long int cross(pt a, pt b) {
	return (conj(a)*b).y;
}

long long int orient(pt a, pt b, pt c) {
	return cross(b - a, c - a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.precision(10);
	cout << fixed;
	long long int r, c;
	vector<pt> pts;
	forn(i, 3) {
		cin >> r >> c;
		pts.push_back(pt(r, c));
	}
	long long int res = orient(pts[0], pts[1], pts[2]);
	if(res == 0)
		cout << "TOWARDS\n";
	else if(res > 0)
		cout << "LEFT\n";
	else
		cout << "RIGHT\n";
	return 0;
}
