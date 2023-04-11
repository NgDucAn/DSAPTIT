#include<bits/stdc++.h>
using namespace std;

int n, final = 0, a[1000000];

void init() {
    for(int i = 3; i <= n - 1; i++) {
        a[i] = 6;
    }
    a[1] = 8, a[2] = 6, a[n] = 6;
}

void sinh() {
    int i = n - 1;
    while(i >= 3 && a[i] == 8) {
        a[i] = 6;
        i--;
    }
    if(i <= 2) final = 1;
    else {
        a[i] = 8;
    }
}

int check() {
    int d8 = 0, d6 = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] == 8) {
            d8++;
            d6 = 0;
        }
        else {
            d6++;
            d8 = 0;
        }
        if(d6 == 4 || d8 == 2) return 0;
    }
    return 1;
}

int main() {
    cin >> n;
    init();
    while(!final) {
        if(check()) {
                for(int i = 1; i <= n; i++) {
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
}