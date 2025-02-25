#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n, x;

bool cmp (int a, int b){
    a = abs(x - a); b = abs(x - b);
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        cin >> n >> x;
        int a[n];
        for (int &i : a) cin >> i;
        stable_sort(a, a + n, cmp);
        for (int i : a) cout << i << " ";
        cout << "\n";
    }
    return 0;
}