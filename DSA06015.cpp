#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void TestCase() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int l = 0, r = n - 1, m = (l + r) / 2;
    int n1 = m - l + 1, n2 = r - m;
    int x[n1], y[n2];
    for(int j = l; j <= m; j++) {
        x[j - l] = a[j];
    }
    for(int j = m + 1; j <= r; j++) {
        y[j - m - 1] = a[j];
    }
    int i = 0, j = 0, cnt = l;
    while(i < n1 && j < n2) {
        if(x[i] <= y[j]) {
            a[cnt++] = x[i++];
        }
        else a[cnt++] = y[j++];
    }
    while(i < n1) a[cnt++] = x[i++];
    while(j < n2) a[cnt++] = y[j++];
    for(int x : a) cout << x << " ";
    cout << endl;
}   

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }    
}