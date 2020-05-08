#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    long temp;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> n;
        long s = 0;
        for(int j = 0; j < n; j++){
            cin >> temp;
            s += temp;
        }
        cout << long(ceil(s/float(n))) << "\n";
    }
}
