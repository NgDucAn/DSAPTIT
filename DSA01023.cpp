#include<bits/stdc++.h>
using namespace std;

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
    int b[k + 1];
    for(int i = 1; i <= k; i++) cin >> b[i];
    init();
    int dem = 1;
    while(!final) {
        int cnt = 0;
        for(int i = 1; i <= k; i++) {
            if(a[i] == b[i]) cnt++;   
        }
        if(cnt == k) break;
        dem++;
        sinh();
    }
    cout << dem << endl;
    final = 0;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}

