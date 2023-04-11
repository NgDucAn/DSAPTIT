#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = 0, r = n - 1;
    vector<int> v;
    while(l <= r) {
        v.push_back(a[r]);
        v.push_back(a[l]);
        l++;
        r--;
    }
    if(r%2 == 0) {
        v.pop_back(); 
    }
    for(auto x : v) cout << x << ' ';
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}