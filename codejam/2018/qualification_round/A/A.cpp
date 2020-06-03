#include <bits/stdc++.h>

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
	int t, dmax;
	string s;
	cin >> t;
	forn(j, t) {
		cin >> dmax;
		getline(cin, s);
		vector<int> dvec;
		int d = 1, curr_d = 0;
		s = s.substr(1, s.length() - 1);
		for(char c : s) {
			if(c == 'C') {
				d *= 2;
				dvec.push_back(0);
			}
			else {
				dvec.push_back(d);
				curr_d += d;
			}
		}
		if(curr_d <= dmax) {
			cout << "0\n";
			continue;
		}
		int hacks = 0;
		while(curr_d > dmax) {
			for(int i = s.length() - 1; i > 0; i--) {
				cout << dvec[0] << " " << dvec[1] << "\n";
				if((dvec[i - 1] == 0) && (dvec[i] > 0)) {
					cout << "im in \n";
					hacks++;
					curr_d -= dvec[i];
					dvec[i - 1] = dvec[i] / 2;
					dvec[i] = 0;
				}
				if(curr_d <= dmax)
					break;
			}
		}
		cout << hacks << "\n";
	}
	return 0;
}
