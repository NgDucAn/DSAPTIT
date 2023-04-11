#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k;
vector<int> a, b;
bool hasAnswer;

void init() {
    int sum = 0;
    for(int i = 0; i < b.size(); i++) {
       sum += a[b[i]];
    }
    if(sum == k) {
        hasAnswer = true;
        cout << "[";
        for(int i = 0; i < b.size(); i++) {
            cout << a[b[i]];
            if(i != b.size() - 1) cout << " ";
        }
        cout << "] ";
    }
}

void Try(int i) {
    for(int j = 1; j >= 0; j--) {
        if(j == 1) b.push_back(i);
        if(i == n - 1) init();
        else Try(i + 1);
        if(j == 1) b.pop_back();
    }
}

void TestCase() {
    cin >> n >> k;
    a.resize(n);
    hasAnswer = false;
    for(int &i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    Try(0);
    if(hasAnswer == false) cout << -1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
        cout << endl;
    }
}
