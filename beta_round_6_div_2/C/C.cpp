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
	int n;
	cin >> n;
	vector<int> v(n);
	forn(i, n)
		cin >> v[i];
	if(n == 1) {
		cout << "1 0\n";
		return 0;
	}
	int f1 = 1, f2 = n - 2, total_a = v[0], total_b = v[n-1];
	while(f1 <= f2) {
		if(total_a > total_b) {
			total_b += v[f2];
			f2--;
		}
 		else {
			total_a += v[f1];
			f1++;
		}
	}
	cout << f1 << " " << n - f2 - 1<< "\n";
	return 0;
}
