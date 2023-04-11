#include <bits/stdc++.h> 
using namespace std; 

void check(int m,int dau,int trunggian,int cuoi) { 
    if(m==1) { 
        cout << char(dau) << " -> " << char(cuoi) << endl; 
        return; 
    } 
    check(m-1,dau,cuoi,trunggian); 
    cout<< char(dau) << " -> " << char(cuoi) << endl; 
    check(m-1,trunggian,dau,cuoi); 
} 

int main() { 
    int n; cin >> n; 
    check(n,65,66,67); 
}