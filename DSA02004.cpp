#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll n, a[100][100], ok = 0;
vector<string> v;

void nhap() {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

char xuly(int k) {
    string s = "DLRU";
    return s[k];
}

int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};

void Try(int i, int j, string s) {
    if(i == n && j == n) {
        v.push_back(s);
    }
    for(int k = 0; k < 4; k++) {
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= n && a[i1][j1]) {
            a[i][j] = 0;
            Try(i1, j1, s + xuly(k));
            a[i][j] = 1;
        }
    }
}

void TestCase() {
    v.clear();
    cin >> n;
    nhap();
    if(a[1][1] == 0 || a[n][n] == 0) {
        cout << - 1;
        return;
    }
    string s = "";
    a[1][1] = 0;
    Try(1, 1, s);
    if(v.empty()) {
        cout << - 1;
        return;
    }
    sort(v.begin(), v.end());
    for(string it : v) {
        cout << it << " ";
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
        cout << endl;
    }
}
