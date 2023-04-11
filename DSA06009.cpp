#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void testCase() {
    int n, k; cin >> n >> k;
    int a[n];
    vector<int> v;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //sort(a, a + n);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
       int it = binary_search(a, a + n, k - a[i]);
       cout << it << " ";
       //if(it != -1) 
    }
    //cout << cnt << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        testCase();
    }
}