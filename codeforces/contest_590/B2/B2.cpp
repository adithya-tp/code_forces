include <bits/stdc++.h>
using namespace std;
// had to use this custom hash to make it through for this one. Damn!
// credits for the custom hash: https://codeforces.com/blog/entry/62393
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cap;
    long temp;
    while(cin >> n >> cap) {
        unordered_map<long long, bool, custom_hash> record;
        deque<long long> msg;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(record.find(temp) == record.end()){
                record[temp] = true;
                msg.emplace_back(temp);
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
