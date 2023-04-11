#include<bits/stdc++.h>
using namespace std;

int x, k, final = 0, a[1000000];
int m = 0, b[1000000];

void init() {
    for(int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

void sinh() {
    int i = k;
    while(i >= 1 && a[i] == m - k + i) {
        i--;
    }
    if(i == 0) final = 1;
    a[i]++;
    for(int j = i + 1; j <= k; j++) {
        a[j] = a[j - 1] + 1;
    }
}

int main() {
    cin >> x >> k;
    set<int> se;
    for(int i = 1; i <= x; i++) {
        cin >> a[i];
        se.insert(a[i]);
    }
    for(auto it : se) {
        b[m] = it;
        m++;
    }
    init();
    while(!final) {
        for(int i = 1; i <= k; i++) {
            cout << b[a[i] - 1] << " ";
        }
        cout << endl;
        sinh();
    }
}