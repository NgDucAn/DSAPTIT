#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void TestCase() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    string x = "", y = "";
    for(int i = 0; i < n; i++) {
        if(i % 2 == 1) {
            y += to_string(a[i]);
        }
        else x += to_string(a[i]);
    }
    cout << stoll(x) + stoll(y) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}