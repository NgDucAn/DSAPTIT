#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void TestCase() {
    int n, x; cin >> n >> x;
    int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    if(mp[x] > 0) cout << mp[x] << endl;
    else cout << "-1\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}