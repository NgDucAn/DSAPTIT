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
    while(i >= 1 && a[i] > a[i + 1]) {
        i--;
    }
    if(i == 0) final = 1;
    else{
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main() {
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++) cin >> x[i];
    sort(x, x + n);
    init();
    while(!final) {
        for(int i = 1; i <= n; i++) {
            cout << x[a[i] - 1] << " ";
        }
        cout << endl;
        sinh();
    }
}