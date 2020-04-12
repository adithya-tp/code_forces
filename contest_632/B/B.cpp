/*
Iteration 1:
If a[i] < b[i], there must be a 1 in the indices ranging from 0, i - 1
to get a[i] to be equal to b[i]. If a[i] > b[i], we need a -1. We need to 
check this for every index. Complexity = O(n^2) for naive implementation of idea.

Iteration 2:
Optimized Implementation of same idea. Simply maintain an array of 2 elements 
where we switch on the first and second element if we see +1 or -1 respectively.
This avoids having a loop to check the presence of +1 or -1 in the preceeding 
elements for any index i.
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, l, temp, flag;
    cin >> t;
    while(t--) {
        cin >> l;
        flag = 0;
        vector<int> a, b;
        for(int i = 0; i < l; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        for(int i = 0; i < l; i++) {
            cin >> temp;
            b.push_back(temp);
        }
        vector<int> minus_plus_one_present = {0, 0};
        for(int i = 0; i < l; i++) {
            if(a[i] < b[i] && !minus_plus_one_present[0]) {
                flag = 1;
                break;
            }
            else if(a[i] > b[i] && !minus_plus_one_present[1]) {
                flag = 1;
                break;
            }
            if(a[i] == 1)
                minus_plus_one_present[0] = 1;
            else if(a[i] == -1)
                minus_plus_one_present[1] = -1;
        }
        if(flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

}