#include <bits/stdc++.h>
using namespace std;
/* 
First Iteration: 

My initial thought was to find nearest ten lower than the given number (while k is non-zero).
If the difference was zero, I would decrease k by 1, and a becomes one-tenth of itself.
Else, I check if we have a k value big enought to decrease "difference" from.
    If we did, I decrease k and a by diff.
    Else decrease a by k, and k is now zero. Exit while.
*/

/*
Second Iteration:

On browsing solutions on this, I realize it's more straight-forward to just follow
the procedure given in the problem k times (who would've thought huh...)
(although the running time for this is more).
*/
int main() {
    long a, nearest_ten, diff;
    int k;
    cin >> a >> k;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(k) {
        nearest_ten = (a / 10) * 10;
        diff = a - nearest_ten;
        if(diff) {
            if(diff <= k) {
                k -= diff;
                a -= diff;
            }
            else {
                a -= k;
                k = 0;
            }
        }
        else {
            k--;
            a /= 10;
        }
    }
    cout << a << "\n";
    return 0;
}