#include<bits/stdc++.h>
using namespace std;

using namespace std;

using ll = long long;


void TestCase() {
    set<ll> se;
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        while(a[i]) {
            se.insert(a[i] % 10);
            a[i] /= 10;
        }
    }
    for(auto x : se) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}
