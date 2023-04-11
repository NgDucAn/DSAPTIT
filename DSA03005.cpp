#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void TestCase() {
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+ n);
    k = min(k, n - k);
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < k; i++) sum1 += a[i];
    for(int i = k; i < n; i++) sum2 += a[i];
    cout << sum2 - sum1 << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}