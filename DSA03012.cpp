#include<bits/stdc++.h>
using namespace std;

void TestCase() {
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    int max_val = 0;
    for(auto it : mp) {
        max_val = max(max_val, it.second);
    }
    if(s.size() - max_val >= max_val - 1) cout << 1 << endl;
    else cout << -1 << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}