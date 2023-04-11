#include<bits/stdc++.h>
using namespace std;

char c;
string s;
bool used[127];

bool isConsonat(char c) {
    return (c != 'A' && c != 'E');
}

void solve() {
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'A' || s[i] == 'E') {
            if (i > 0 && i < s.length() - 1 && isConsonat(s[i - 1]) && isConsonat(s[i + 1]))
                return;
        }
    }
    cout << s << endl;
}

void Try(char i) {
    for(char j = 'A'; j <= c; j++) {
        if(!used[j]) {
            used[j] = true;
            s.push_back(j);
            if(s.size() == c - 'A' + 1) solve();
            else Try(i + 1);
            used[j] = false;
            s.pop_back();
        }
    }
}

int main() {
    cin >> c;
    memset(used, false, sizeof(used));
    Try('A');
}