#include<bits/stdc++.h>
using namespace std;

int n, final = 0, a[100000];

void init() {
    for(int i = 1; i <= n; i++) {
        a[i] = i;
    }
}

void sinh() {
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]) i--;
    if(i == 0) final = 1;
    else {
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

void TestCase() {
    cin >> n;
    int b[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    init();
    int dem = 1;
    while(!final) {
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(a[i] == b[i]) cnt++;
        }
        if(cnt == n) break;
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