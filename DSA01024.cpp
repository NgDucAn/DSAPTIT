#include<bits/stdc++.h>
using namespace std;

int n, k, a[1000000];
set<string> se;
vector<string> tmp;
vector<vector<string>> res;

void inkq() {
    vector<string> x;
    for(int i = 1; i <= k; i++) {
        x.push_back(tmp[a[i]]);
    }
    sort(x.begin(), x.end());
    res.push_back(x);

}

void Try(int i) {
    for(int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if(i == k) {
            inkq();
        }
        else {
            Try(i + 1);
        }
    }
}

int main() {
    cin >> n >> k;
    set<string> se;
    for(int i = 1; i < n; i++) {
        string s; cin >> s;
        se.insert(s);
    }
    tmp.push_back("");
    for(auto it : se) {
        tmp.push_back(it);
    }
    n = tmp.size() - 1;
    Try(1);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (string j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}