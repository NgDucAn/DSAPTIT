#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[1000][1000];
vector<string> v;

void nhap() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j, string s) {
    if(i == n && j == n) {
        v.push_back(s);
    }
    //Xet nhanh down D[i + 1][j]    
    if(i + 1 <= n && a[i + 1][j] == 1) {
        a[i + 1][j] = 0; // khong di lai loi nay
        s += "D";
        Try(i + 1, j , s);
        a[i + 1][j] = 1;
        s.pop_back();
    }
    //Xet nhanh Right R[i][j + 1]
    if(j + 1 <= n && a[i][j + 1] == 1) {
        a[i][j + 1] = 0; // khong di lai noi nay
        s += "R";
        Try(i, j + 1, s);
        a[i][j + 1] = 1;    
        s.pop_back();
    }
}

void TestCase() {
    v.clear();
    nhap();
    if(a[1][1] == 0 || a[n][n] == 0) {
        cout << "-1";
        return;
    }
    string s = "";
    Try(1, 1, s);
    if(v.empty()) {
        cout << "-1";
    }
    else {
        sort(v.begin(), v.end());
        for(string x : v) {
            cout << x << " ";
        }
    }
}
int main() {
    int t; cin  >> t;
    while(t--) {
        TestCase();
        cout << endl;
    }
}   