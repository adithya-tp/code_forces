/*
Iteration 1:
Store given strings and their respective counts in a dicitonary.
Keep a running sum of the strings as they come (via lookup).
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string s;
    int sum = 0;
    cin >> t;
    unordered_map<string, int> count_map = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};
    while(getline(cin, s)) {
        sum += count_map[s];
    }
    cout << sum << "\n";
    return 0;
}