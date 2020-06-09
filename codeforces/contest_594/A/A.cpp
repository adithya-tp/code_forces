/* Iteration 1:
 * equation Y values we get, X = (q(i) - p(i)) / 2 and 
 * Y = -X + q(i) = X + p(i) = (q(i) + p(i)) / 2
 * 
 * For each q being entered, I check with all p values if X and Y are integers.
 * This approach is correct, but slow (TLE of 4th test case).
 * 
 * Iteration 2:
 * This blew my mind. Its a very simple trick, soo elegant nonetheless.
 * We start off with the equations we arrived at for X and Y in Iteration 1.
 * Now, the we can notice that X and Y would be integral values respectively, 
 * iff both p and q have the same PARITY!!!
 * 
 * All we now have to do is find the number of odd p and even p (p0 and p1),
 * and odd q and even q. The total number of valid combinations is p0*q0 + p1*q0
 * (because this the number of ways of choosing 
 * odd parity p AND q, 
 * OR
 * even parity p AND q. 
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, p, q, num;
    cin >> t;
    while(t--) {
		long long int p0 = 0, p1 = 0, q0 = 0, q1 = 0;
		cin >> p;
		while(p--) {
			cin >> num;
			if(num % 2 == 0)
				p0++;
			else
				p1++;
		}
		cin >> q;
		while(q--) {
			cin >> num;
			if(num % 2 == 0)
				q0++;
			else
				q1++;
		}
		cout << p0 * q0 + p1 * q1 << "\n";
    }
    return 0;
}
