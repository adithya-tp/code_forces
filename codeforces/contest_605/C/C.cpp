#include <bits/stdc++.h>
using namespace std;
int main() {
    int len, avail_total;
    while(cin >> len >> avail_total){
        unordered_map<char, bool> lookup;
        string s;
        char temp;
        long long sum = 0, n = 0;
        cin >> s;
        for(int i = 0; i < avail_total; i++){
            cin >> temp;
            lookup[temp] = true;
        }
        for(char c : s){
            if(lookup.find(c) != lookup.end()){
                n += 1;
            }
            else{
                if(n != 0){
                    sum += n*(n+1) / 2;
                    n = 0;
                }        
            }
        }
        sum += n*(n+1) / 2;
        cout << sum << "\n";
    }
    return 0;
}
