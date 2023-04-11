#include<bits/stdc++.h>
using namespace std;

int n, x[100], cot[100], xuoi[100], nguoc[100], res = 0;

void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0) {
            x[i] = j;
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
            if(i == n) res++;
            else{
                Try(i + 1);
            }
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
        }
    }
}

int main() {
    int t; cin >> t;
    memset(cot, 0, sizeof(cot));
    memset(xuoi, 0, sizeof(xuoi));
    memset(nguoc, 0, sizeof(nguoc));
    while(t--) {
        cin >> n;
        Try(1);
        cout << res << endl;
        res = 0;
    }
}