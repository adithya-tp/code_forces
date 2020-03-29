/*
Iteration 1:
Set a var op = 0. "OR" it with the n numbers that follow.
If op is non-zero at any point, print "HARD" and return.
Else print "EASY".

Iteration 2:
You could maintain the max seen so far as well.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int op = 0;
    while(n--) {
        cin >> op;
        op |= op;
        if(op){
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY\n";
    return 0;
}