#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

void TestCase() {
    int n; cin >> n;
    int a[n], b[n];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    pair<int, int> p[n];
    for(int i = 0; i < n; i++) {
        p[i].first = a[i];
        p[i].second = b[i];
    }
    sort(p, p + n, cmp);
    int cnt = 1, i = 1;
    int end = p[0].second;
    while(i < n) {
        if(p[i].first >= end) {
            cnt++;
            end = p[i].second;
        }
        i++;
    }
    cout << cnt << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}