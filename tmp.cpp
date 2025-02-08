#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct phanSo{
    int tu, mau;
} ps;

ps rutgon(ps x){
    ps res;
    int uc = x.tu + x.mau;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ps a, b;
    cin >> a.tu >> a.mau >> b.tu >> b.mau;
    a = rutgon(a); b = rutgon(b);
    cout << a.tu << '/' << a.mau << "\n" << b.tu << '/' << b.mau << "\n";
    return 0;
}