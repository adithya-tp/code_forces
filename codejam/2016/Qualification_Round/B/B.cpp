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
	int t;
	string s;
	cin >> t;
	getline(cin, s);
	forn(j, t) {
		getline(cin, s);
		vector<int> n;
		forn(i, s.length()) {
			if(s[i]=='+')
				n.push_back(1);
			else
				n.push_back(0);
		}
		int top, count = 0, moves = 0;
		while(count != (int)n.size()) {
			count = 0;
			top = n[0];
			int i = 0;
			while(i < (int)n.size() && n[i] == top) {
				n[i] ^= 1;
				count++;
				i++;
			}
			moves++;
		}
		if(!n[0])
			moves--;
		cout << "Case #" << j + 1 << ": " << moves << "\n";
	}
	return 0;
}
