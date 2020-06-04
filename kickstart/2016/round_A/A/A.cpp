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
	int t, n;
	cin >> t;
	forn(i, t) {
		cin >> n;
		int res = INT_MIN;
		string res_string="Z", name;
		getline(cin, name);
		forn(j, n) {
			getline(cin, name);
			set<char> uniq;
			for(char c : name)
				if(isalpha(c))
					uniq.insert(c);
			if((int)uniq.size() > res) {
				res_string = name;
				res = uniq.size();
			}
			else if((int)uniq.size() == res) {
				if(name < res_string)
					res_string = name;
			}
		}
		cout << "Case #" << i + 1 << ": " << res_string << "\n";
	}
	return 0;
}
