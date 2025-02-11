#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];
int s, t, u, v, m, n;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int d[1005][1005];

void init(){
    cin >> n >> m >> s >> t >> u >> v;
    s++, t++, u++, v++;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    memset(d, 0, sizeof(d));
}

void bfs(int i, int j) {
    queue<pair<int, int>> q;
    q.push({i, j});
    a[i][j] = 0;

    while (!q.empty()) {
        pair<int, int> top = q.front();
        q.pop();

        for (int k = 0; k < 4; k++) {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];

            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]) {
                d[i1][j1] = d[top.first][top.second] + 1;
                q.push({i1, j1});
                a[i1][j1] = 0;

                if (i1 == u && j1 == v) return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int te;
    cin >> te;
    while (te--){
        init();
        if (s == u && t == v) cout << 0 << "\n";

        else if (a[s][t] && a[u][v]) {
            bfs(s, t);
            if (d[u][v]) cout << d[u][v] << "\n";
            else cout << -1 << "\n";
        } 
        else cout << -1 << "\n";
    }
    return 0;
}


/*
Cho ma trận A[N][M] chỉ bao gồm các số 0 và 1. Hãy tìm đường đi ngắn nhất từ một phần tử bắt đầu đến phần tử đích.
Biết mỗi bước đi ta chỉ được phép dịch chuyển từ phần tử có giá trị 1 đến phần tử có giá trị 1. 
Ví dụ với ma trận dưới đây sẽ cho ta kết quả là 11.

  A[9][10]       {{1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },

                  {1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },

                  {1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },

                  {0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },

                  {1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },

                  {1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },

                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },

                  {1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },

                  {1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }};

Begin = A[0][0];
End =A[3][4];

Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào 6 số N, M, 
phần tử bắt đầu (x, y),  phần tử kết thúc (z, t); 

dòng tiếp là N×M các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
T, N, M, x, y, z, t thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M ≤10^3; 1≤ x, y, z, t ≤10^3.
Output:

Đưa ra kết quả mỗi test theo từng dòng. Nếu không tìm được đáp án, in ra -1.
*/