#include<bits/stdc++.h>
using namespace std;

int subarray_count(int n) {
    return (n * (n+1)) / 2;
}

int main() {
    int l;
    cin >> l;
    vector<long long> arr(l);
    for(int i = 0; i < l; i++) {
        cin >> arr[i];
    }
    int current_sum = arr[0], p1 = 0, p2 = 1, sum = 0;
    while(p2 < l) {
        //cout << p1 << " " << p2 << "\n";
        //cout << sum << " " << current_sum << "\n";
        if(current_sum != 0) {
			            current_sum += arr[p2];
			p2++;
        }
        else {
            sum += subarray_count(p2 - p1 + 1) - 1;
			p2++;
			p1 = p2;
			current_sum = arr[p2];
        }
    }
    //cout << sum << " " << current_sum << "\n";
    cout << sum << "\n";
    sum += subarray_count(l - p2 + 1) - 1;
    cout << sum << "\n";
}
