#include<bits/stdc++.h>
using namespace std;

int a[20], n, k;

void print()
{
    for(int i = 1; i <= k; ++i) cout << (char) (a[i] + 'A' - 1);
    cout << endl;
}

void Try(int i)
{
    for(int j = a[i - 1] + 1; j < n - k + i; ++j)
    {
        a[i] = j;
        if(i == k) print();
        else Try(i + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        ++n;
        Try(1);
    }
    return 0;
}