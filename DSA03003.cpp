#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll MOD = 1e9 + 7;

void TestCase() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += 1ll * a[i] * i;
        sum %= MOD;
    }
    cout << sum << endl;
}   

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}