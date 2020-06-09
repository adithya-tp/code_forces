#include <bits/stdc++.h>
using namespace std;
void print(char c, int times){
    for(int i = 0; i < times; i++){
        cout << c;
    }
}
int main(){
    int t;
    cin >> t;
    string s;
    while(cin >> s){
        unordered_map<char, int> count_map = {
            {'U', 0},
            {'L', 0},
            {'D', 0},
            {'R', 0}
        };
        for(char c : s){
            count_map[c]++;
        }
        count_map['U'] = min(count_map['U'], count_map['D']);
        count_map['L'] = min(count_map['L'], count_map['R']);
        if(count_map['U'] == 0){
            if(count_map['L'] == 0){
                cout << 2*(count_map['U'] + count_map['L']) << "\n";
                continue;
            }
            count_map['L'] = 1;
        }
        if(count_map['L'] == 0){
            count_map['U'] = 1;
        }
        cout << 2*(count_map['U'] + count_map['L']) << "\n";
        print('U', count_map['U']);
        print('L', count_map['L']);
        print('D', count_map['U']);
        print('R', count_map['L']);
        cout << "\n";
    }
    return 0;
}
