#include<bits/stdc++.h>
using namespace std;

using ll  = long long;

int n, k, a[100000], final = 0;

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
    if(i == 0) {
        final = 1;
    }
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        init();
        while(!final) {
        for(int i = 1; i <= k; i++) {
            cout << a[i];
        }
        sinh();
        cout << " ";
        }
        final = 0;
        cout << endl;
    }
}