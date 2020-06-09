/*
 * Iteration 1:
 * The answer is independent of the number a (the constant subarray size
 * within which there needs to be 'b' number of distinct chars)
 * We simply need to the first b letters of the alphabet in a cycle 
 * till we reach the length of the given string. 
 * Any window size (a) that you may impose upon this generated string
 * will always have b unique characters. 
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, a, b;
    cin >> t;
    while(t--) {
        cin >> n >> a >> b;
		vector<char> s;
		for(int i = 0, j = 0; i < n; i++, j++) {
			s.push_back('a' + (i%b));
		}
		for(char c : s)
			cout << c;
		cout << "\n";
    }
    return 0;
}
