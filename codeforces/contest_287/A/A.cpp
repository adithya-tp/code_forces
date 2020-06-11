/* Iteration 1:
 * Sort with indices. Add to running sum and push index, only if the
 * current sum doesn't exceed the number of days, for the current element.
 */
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
	int n, days;
	cin >> n >> days;
	vector<pair<int, int>> v;
	forn(i, n) {
		int temp;
		cin >> temp;
		v.push_back(make_pair(temp, i + 1));
	}
	sort(v.begin(), v.end());
	int count = 0, sum = 0;
	vector<int> ind;
	for(int i = 0; i < n; i++) {
		if(sum + v[i].first > days)
			break;
		ind.push_back(v[i].second);
		sum += v[i].first;
		count++;
	}
	
	cout << count << "\n";
	if((int)ind.size()) {
		forn(i, ind.size())
			cout << ind[i] << " ";
		cout << "\n";
	}
	return 0;
}
