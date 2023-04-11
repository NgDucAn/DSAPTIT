#include <bits/stdc++.h>
using namespace std;

string s;
int a[100000],used[1000000];

void inkq() {
    for(int i = 1; i <= s.size(); i++) {
        cout << s[a[i] - 1];
    }
    cout << " ";
}

void Try(int i) {
    //Duyet cac kha nang ma a[i] nhan duoc
    for(int j = 1; j <= s.size(); j++) {
        if(used[j] == 0) {
            a[i] = j;
            // Danh dau nhung phan tu j da xuat hien
            used[j] = 1;
            if(i == s.size()) {
                inkq();
            }
            else {
                Try(i + 1);
            }
            // backtrack
            used[j] = 0;
        }
    }
}

void TestCase() {
    cin >> s;
    Try(1);
}

int main() {
    int t; cin >> t;
    while(t--) {
        TestCase();
        cout << endl;
    }
}