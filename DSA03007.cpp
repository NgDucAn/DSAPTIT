#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void TestCase() {
    int n; cin >> n;
    int a[n], b[n];
    for(int &x : a) {
        cin >> x;
    }
    for(int &x : b) {
        cin >> x;
    }
    sort(a, a + n);
    sort(b, b + n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += 1ll * a[i] * b[n - i - 1];
    }
    cout << sum << endl;
} 

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}