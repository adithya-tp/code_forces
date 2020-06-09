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
	int r, c;
	char color;
	cin >> r >> c >> color;
	vector<vector<char>> office(r, vector<char>(c));
	forn(i, r) {
		forn(j, c) {
			cin >> office[i][j];
		}
	}

	int count = 0;
	vector<int> dr = {0, 1, 0, -1};
	vector<int> dc = {1, 0, -1, 0};
	set<char> seen = {color, '.'};
	forn(i, r) {
		forn(j, c) {
			if(office[i][j] == color) {
				forn(d, 4) {
					if(i + dr[d] >= 0 && i + dr[d] < r && j + dc[d] >= 0 && j + dc[d] < c)
						if(seen.find(office[i + dr[d]][j + dc[d]]) == seen.end()) {
							count++;
							seen.insert(office[i + dr[d]][j + dc[d]]);
						}
				}
			}
		}
	}
	cout << count << "\n";
	return 0;
}
