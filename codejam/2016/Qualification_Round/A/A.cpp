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
	int n, t;
	cin >> t;
	forn(i, t) {
		set<int> seen;
		cin >> n;
		if(!n) {
			cout << "Case #" << i + 1 << ": INSOMNIA\n";
			continue;
		}
		int temp2 = n;
		while(seen.size() < 10) {
			int temp = n;
			while(temp) {
				int dig = temp % 10;
				if(seen.find(dig) == seen.end()) {
					seen.insert(dig);
				}
				temp /= 10;
			}
			if(seen.size() < 10) {
				n += temp2;
			}
		}
		cout << "Case #" << i + 1 << ": " << n << "\n";
	}
			
	return 0;
}
