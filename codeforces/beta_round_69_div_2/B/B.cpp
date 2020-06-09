/* Iteration 1:
 * (hrs % 12) + mins / 60 will give you the number of units by which the hr 
 * hand needs to move forward (one unit being "30 degress" = 360 / 12).
 * And of course you move the minute hand by "mins" units (one unit
 * being "6 degrees" = 60 / 6).
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
	string s;
	cin >> s;
	float hrs = stoi(s.substr(0, 2));
	float mins = stoi(s.substr(3, 2));
	
	cout << (((int)hrs % 12) + mins / 60.0) * 30.0 << " " << mins * 6.0 << "\n";

	return 0;
}
