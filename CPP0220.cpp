#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            if (i == 0 || i == n - 1) {
                for (int j = 0; j < n; j++) cout << a[i][j] << " ";
            }
            else {
                for (int j = 0; j < n; j++){
                    if (j == 0 || j == n - 1) cout << a[i][j] << " ";
                    else cout << "  ";
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}