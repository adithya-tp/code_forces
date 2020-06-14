/* Iteration 1:
 * If every element is divisible by h, result is -1.
 * Now keep expanding the right pointer all the way to the right,
 * and keep track of the longest subsequence that isn't divisible.
 * 
 * Then keep contracting this maximal "pointer window" by moving the 
 * left pointer all the way to the right, while keeping track of the 
 * longest subsequence that isn't divisible.
 * 
 * We perform this contraction, because the longest subsequence might
 * start from not just the 0th index. Alternately, expanding the window
 * corresponds to finding the required length that ends at different points.
 * Now that we have that length, we find the required length that could start at
 * different points. Hence the contraction of the "pointer" window.
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
	int t, n, h;
	cin >> t;
	while(t--) {
		int div_count = 0;
		cin >> n >> h;
		vector<int> v(n);
		forn(i, n) {
			cin >> v[i];
			if(v[i] % h == 0)
				div_count++;
		}
		if(div_count == n) {
			cout << "-1\n";
			continue;
		}
		int sum = 0, left = 0, right = 0, res = 0;
		while(right < n) {
			sum += v[right];
			if(sum % h != 0) {
				res = max(res, right - left + 1);
			}
			right++;
		}
		right--;
		while(left < n) {
			sum -= v[left];
			if(sum % h != 0) {
				res = max(res, right - left);
			}
			left++;
		}
		cout << res << "\n";
	}
	return 0;
}
