#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int check(int a[], int b[], int n) {
    for(int i = 0; i < n; i++) {
        if(b[i] != a[i] && b[i] != a[n - i - 1]) return 0;
    }
    return 1;
}

void TestCase() {
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    if(check(a, b, n)) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}