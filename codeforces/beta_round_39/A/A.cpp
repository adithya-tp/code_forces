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

int sq(pt p) {
	return pow(p.x, 2) + pow(p.y, 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.precision(10);
	cout << fixed;
	int r, c;
	cin >> r >> c;
	pt p(r, c);
	int upper_bound = ceil(sqrt(sq(p)));
	if(sq(p) == sq(upper_bound) || p.x == 0 || p.y == 0) {
		cout << "black\n";
	}
	else {
		if(upper_bound % 2 == 0) {
			if(p.x * p.y > 0) {
				cout << "white\n";
			}
			else {
				cout << "black\n";
			}
		}
		else { 
			if(p.x * p.y > 0) {
				cout << "black\n";
			}
			else {
				cout << "white\n";
			}
		}
	}
	
	return 0;
}
