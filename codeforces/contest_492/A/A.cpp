#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, curr_div, temp, idx = 4, count = 0;
    cin >> n;
    int deno[] = {1, 5, 10, 20, 100};
    while(n > 4) {
        count += n / deno[idx];
        n = n % deno[idx];
        idx--;
    }
    cout << count + n << "\n";
    return 0;
}