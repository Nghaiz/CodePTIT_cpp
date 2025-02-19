#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        int cnt = 0, end = sqrt(n);
        for (int i = 2; i <= end; i++) {
            if (isPrime(i)) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}