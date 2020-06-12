/* Iteration 1:
 * Just find all ways in which 3 distinct figures could be inscribed
 * within each other. If a square is inside a triangle or vice-versa, 
 * print "Infinite" and exit. If a circle is within a square or a 
 * vice versa, increase count by 4. If a circle is within a triangle 
 * increase count by 3. The only edge case really is when a 
 * triangle is inside a circle, which in turn is inside a square. In this
 * case, there is a common point of contact (draw it out), therefore
 * increment by 2 only.
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
	int n;
	cin >> n;
	vector<int> v(n);
	forn(i, n)
		cin >> v[i];
	int count = 0;
	forn(i, n - 1) {
		int temp = v[i] + v[i + 1];
		if(temp == 3) {
			if(i > 0 && v[i - 1] == 3)
				count += 2;
			else
				count += 3;
		}
		
		else if(temp == 4)
			count += 4;
		
		else {
			cout << "Infinite\n";
			return 0;
		}
	}
	cout << "Finite\n";
	cout << count << "\n";
	return 0;
}
