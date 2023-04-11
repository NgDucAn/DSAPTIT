#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n, final = 0, a[1000000];

void init() {
    for(int i = 1; i <= n; i++) {
        a[i] = n - i + 1;
    }
}

void sinh() {
    int i = n - 1;
    while(i >= 1 && a[i] < a[i + 1]) i--;
    if(i == 0) final = 1;
    else {
        int j = n;
        while(a[i] < a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        init();
        while(!final) {
            for(int i = 1; i <= n; i++) {
                cout << a[i];
            }
            sinh();
            cout << " ";
        }
        final = 0;
        cout << endl;
    }
}