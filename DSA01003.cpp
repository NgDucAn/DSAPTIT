#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void TestCase() {
    int n; cin >> n;
    int a[n], final = 1;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int i = n - 1;
    while(i > 0 && a[i] > a[i + 1]) {
        i--;
    }
    if(i == 0) {
       final = 0;
    }
    else {
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
    if(final == 0) {
        for(int i = 1; i <= n; i++) {
            cout << i << ' ';
        }
    }
    else { 
        for(int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}