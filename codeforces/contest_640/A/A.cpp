#include <bits/stdc++.h>
using namespace std;
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, num, count, dig;
    cin >> t;
    while(t--) {
		count = 0;
		vector<int> rounds;
		cin >> num;
		for(int i = 1; i <= log10(num); i++) {
			dig = num % int(pow(10, i));
			if(dig) {
				rounds.push_back(dig);
				num = num - dig;
				count++;
			}
		}
		rounds.push_back(num);
		cout << count + 1<< "\n";
		for(int i : rounds) {
			cout << i << " ";
		}
		cout << "\n";
    }
    return 0;
}
