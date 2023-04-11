#include<bits/stdc++.h>
using namespace std;

int n, a[100], x[100];
bool used[100];

int check() {
    for(int i = 1; i < n; i++) {
        if(abs(a[i + 1] - a[i]) == 1) return 0;
    }
    return 1;
}

void solve() {
    for(int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(!used[j]) {
            used[j] = true;
            a[i] = j;
            if(i == n) {
                if(check()) {
                    solve();
                }
            }
            else Try(i + 1);
            used[j] = false;
        }
    }
}

void TestCase() {
    cin >> n;
    memset(used, false, sizeof(used));
    Try(1);
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
        cout << endl;
    }
}