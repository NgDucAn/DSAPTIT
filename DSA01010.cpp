#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k, final = 0, a[1000000];

void init() {
    for(int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

void sinh() {
    int i = k;
    while(i >= 1 && a[i] == n - k + i) {
        i--;
    }
    if(i == 0) final = 1;
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1; 
        }
    }
}

void TestCase() {
    cin >> n >> k;
    int b[k];
    map<int, int> mp;
    for(int i = 1; i <= k; i++){
        cin >> a[i];
        mp[a[i]]++;
    } 
    sinh();
    if(final == 1) {
        cout << k;
        final = 0;
        return;
    }
    int dem = 0;
    for(int i = 1; i <= k; i++) {
        if(mp[a[i]] == 0) dem++;
    }
    cout << dem;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
        cout << endl;
    }
}