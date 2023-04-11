#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n, final = 0;
char x[105];

void init() {
    for(int i = 1; i <= n; i++) {
        x[i] = 'A';
    }
}

void sinh() {
    int i = n;
    while(i >= 1 && x[i] == 'B') {
        x[i] = 'A';
        i--;
    }
    if(i == 0) final = 1;
    else {
        x[i] = 'B';
    }
}

int main()  {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        init();
        while(!final) {
        for(int i = 1; i <= n; i++) {
            cout << x[i];
        }
        sinh();
        cout << " ";
        }
        final = 0;
        cout << endl;
    }
}