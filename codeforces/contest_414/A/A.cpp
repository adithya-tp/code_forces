#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a, b, c;
    while(cin >> a >> b >> c){
        int notes;
        long count = 0;
        cin >> notes;
        for(int i = 0; i < notes; i++){
            int temp;
            cin >> temp;
            if(temp > b && temp < c){
                count++;
            }             
        }
        cout << count << "\n";
    }
	return 0;
}
