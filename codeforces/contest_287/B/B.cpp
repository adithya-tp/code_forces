/* Iteration 1:
 * We can move the origin by a max distance of 2r in one move.
 * If the distance to destination is not a mutiple of 2r, the last move
 * can be made by fixing the pin at one of the intersection points of the 
 * circles of radii r. The circles I'm talking about here are the ones
 * formed by the penultimate position of the translated origin and the
 * destination.
 * 
 * I guess the main takeaway here is that when you fix the pin on the 
 * border of the circle, you can translate the origin by a distance in 
 * the range [0, 2r] in any direction, depending on what angle you rotate 
 * the circle by, in the range [0, pi].
 */

#include <bits/stdc++.h>
#include <complex>

#define x real()
#define y imag()
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

typedef complex<long> pt;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;

double dist(pt p) {
	return pow(pow(p.x, 2) + pow(p.y, 2), 0.5);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.precision(10);
	cout << fixed;
	long x1, y1, x2, y2, r;
	cin >> r >> x1 >> y1 >> x2 >> y2;
	double res = dist(pt(x1 - x2, y1 - y2));
	cout << int(ceil(res / (2.0 * r))) << "\n";
	return 0;
}
