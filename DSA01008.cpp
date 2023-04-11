#include<bits/stdc++.h> 

using namespace std;

int n, k, final = 0, a[10000000];

void init() {
    for(int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void sinh() {
    int i = n;
    while(i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if(i == 0) final = 1;
    else a[i] = 1;
}

bool check() {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += a[i];
    }
    if(sum == k) return true;
    else return false;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
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
        final = 0;
    }
}