#include<bits/stdc++.h>
using namespace std;

char c;
int n, a[100];

void Try(int i, int bd) {   
    for(int j = bd; j <= int(c - 'A' + 1); j ++) {
        a[i] = j;
        if(i == n) {
            for(int u = 1; u <= n; u++) {
                cout << char(a[u] + 'A' - 1);
            }
            cout << endl;
        }
        else {
            Try(i + 1, j);
        }
    }
}

int main() {
    cin >> c >> n;
    Try(1, 1);
}