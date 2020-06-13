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

typedef complex<int> pt;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;

int dot(pt a, pt b) {
	return (a.x * b.x + a.y * b.y);
}

int cross(pt a, pt b) { 
	return (a.x * b.y - a.y * b.x);
}

bool check_degenerate(pt a, pt b, pt c) {
	if(!dot(a - b, b - c) || !dot(b - c, c - a) || !dot(c - a, a - b))
		return true;
	return false;
}

bool has_postive_area(pt a, pt b, pt c) {
	if(cross(a - c, b - c))
		return true;
	return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.precision(10);
	cout << fixed;  
	int r, c;
	vector<pt> pts;
	forn(i, 3) {
		cin >> r >> c;
		pts.push_back(pt(r, c));
	}
	
	if(check_degenerate(pts[0], pts[1], pts[2])) {
		if(has_postive_area(pts[0], pts[1], pts[2])) {
			cout << "RIGHT\n";
			return 0;
		}
	}
	
	vector<int> delta = {-1, 1};
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			pts[j] = pt(pts[j].x + delta[i], pts[j].y);
			if(check_degenerate(pts[0], pts[1], pts[2])) {
				if(has_postive_area(pts[0], pts[1], pts[2])) {
					cout << "ALMOST\n";
					return 0;
				}
			}
			pts[j] = pt(pts[j].x - delta[i], pts[j].y);
		}
	}
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			pts[j] = pt(pts[j].x, pts[j].y + delta[i]);
			if(check_degenerate(pts[0], pts[1], pts[2])) {
				if(has_postive_area(pts[0], pts[1], pts[2])) {
					cout << "ALMOST\n";
					return 0;
				}
			}
			pts[j] = pt(pts[j].x, pts[j].y - delta[i]);
		}
	}
	
	cout << "NEITHER\n";
	return 0;
}
