/*
Iteration 1:

Simply keep appending alternating strings (which i've stored in an array). 
If t is still non-zero inside the loop, append " that ". 
When outside, print " it" as well.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string out = "";
    string feelings[] = {"I hate", "I love"};
    int index = 0;
    cin >> t;
    while(t--) {
        out += feelings[index];
        index ^= 1;
        if(t) {
            out += " that ";
        }
    }
    cout << out << " it\n";
    return 0;
}