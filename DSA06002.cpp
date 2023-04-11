#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n, x;
bool cmp(int a, int b) {
    if(abs(x - a) < abs(x - b)) return true;
    else return false;
}

void testCase() {
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    stable_sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        testCase();
    }
}