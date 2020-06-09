/*
Iteration 1:
Keep track of all bigram counts in a map.
(Initially, set longest bigram as the first bigram - in case the string length is 2).
Also while iterating from the first to second last character, 
update longest bi_gram seen so far as well as the length of the same.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l;
    string s;
    cin >> l >> s;
    map<string, int> gram_count;
    string max_gram = s.substr(0,2);
    int max_gram_count = 0;

    string sub = "";
    gram_count[max_gram] += 1;
    for(int i = 1; i < l - 1; i++){
        sub = s.substr(i, 2);
        gram_count[sub] += 1;
        if(gram_count[sub] > max_gram_count) {
            max_gram = sub;
            max_gram_count = gram_count[sub];
        }
    }
    cout << max_gram << "\n";
    return 0;
}