#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t; cin >> t;
    for(int i = 0; i < n; i++) {
        if(a[i] != t) cout << a[i] << ' ';
    }
}