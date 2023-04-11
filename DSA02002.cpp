#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
vector<vector<int>> res;

void Try(int i) {
    res.push_back(a);
    if(i == 1) return;
    for(int j = 0; j < i - 1; j++) {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;
    b.clear();
    Try(i - 1);
}

void TestCase() {
    cin >> n;
    a.resize(n);
    res.clear();
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Try(n);
    reverse(res.begin(), res.end());
    for(auto x : res) {
        cout << "[";
        for(int j = 0; j < x.size(); j++) {
            cout << x[j];
            if(j != x.size() - 1) cout << " ";
        }
        cout << "] ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}
