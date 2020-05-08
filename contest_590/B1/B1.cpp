#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cap;
    long temp;
    while(cin >> n >> cap) {
        unordered_map<long long, bool> record;
        deque<long long> msg;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(record.find(temp) == record.end()){
                record[temp] = true;
                msg.push_back(temp);
                if(msg.size() > cap){
                    record.erase(msg.front());
                    msg.pop_front();
                }
            }
        }
        cout << msg.size() << "\n";
        while(!msg.empty()){
            cout << msg.back() << " ";
            msg.pop_back();
        }
        cout << "\n";
    }
    return 0;
}
