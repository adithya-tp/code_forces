#include <bits/stdc++.h>
using namespace std;
int diff;
void check_and_update(int& a, int& b, int& c, int& time) {
    if(a + b <= c) {
        diff = abs(a + b - c) + 1;
        a += diff;
        time += diff;
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, time = 0;
    for(int i = 0; i < 3; i++) {
        cin >> a >> b >> c;
    }
    check_and_update(a, b, c, time);
    check_and_update(b, c, a, time);
    check_and_update(c, a, b, time);
    cout << time << "\n";
    return 0;
}