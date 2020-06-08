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
	int t, n, p;
	cin >> t;
	forn(i, t) {
		cin >> n >> p;
		long long int res = pow(2, n);
		string s;
		forn(j, p) {
			cin >> s;
			set<string> prefs;
			for(int i = 1; i <= s.length(); i++) {
				if(prefs.find(s.substr(0, i)) != prefs.end())
					continue;
				prefs.insert(s.substr(0, i));
			if(n - s.length() > 0)
				res -= pow(2, n - s.length());
			else
				res--;
		}
		cout << "Case #" << i + 1 << ": " << res << "\n";
	}
	return 0;
}
