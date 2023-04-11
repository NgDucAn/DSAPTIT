#include<bits/stdc++.h>
using namespace std;

int n, k, a[100];
string s[1000];
vector<vector<string>> res;
vector<string> x;
set<string> se;

void print() {
    vector<string> tmp;
    for(int i = 1; i <= k; i++) {
        tmp.push_back(x[a[i]]);
    }
    sort(tmp.begin(), tmp.end());
    res.push_back(tmp);
}

void Try(int i) {
    for(int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if(i == k) {
            print();
        }
        else Try(i + 1);
    }
}

int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        se.insert(s[i]);
    }
    x.push_back("");
    for(auto i : se) {
        x.push_back(i);
    }
    n = se.size();
    Try(1);
    sort(res.begin(), res.end());
    for(auto it : res) {
        for(int i = 0; i < it.size(); i++) {
            cout << it[i] << " ";
        }
        cout << endl;
    }
}
