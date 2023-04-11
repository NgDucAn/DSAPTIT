#include<bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int cnt = 0, index = 0;
    while(n != 0) {
        cnt += n / a[index];
        n %= a[index];
        index++;
    }
    cout << cnt << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
    }
}