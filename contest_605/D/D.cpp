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
#define forp(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define form(i, a, b) for(int i = (int)(a); i > (int)(b); i--)

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
	int n;
	cin >> n;
	vi v(n), dp_left(n, 1), dp_right(n, 1);
	forn(i, n)
		cin >> v[i];
	int res = 1;
	forp(i, 0, n - 1) {
		if(v[i] < v[i + 1]) {
			dp_left[i + 1] = dp_left[i] + 1;
			res = max(res, dp_left[i + 1]);
		}
	}
	form(i, n - 1, 0) {
		if(v[i - 1] < v[i])
			dp_right[i - 1] = dp_right[i] + 1;
	}

	forp(i, 1, n - 1) {
		if(v[i - 1] < v[i + 1])
			res = max(res, dp_left[i - 1] + dp_right[i + 1]);
	}
	cout << res << "\n";
	return 0;
}
