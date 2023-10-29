#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 101;

int n, m;
int A[MAX_N][MAX_N];
int nrc;
int VIZ[MAX_N];
vector<int> PLUS, MINUS;

void dfs_positive(int v) {
    PLUS[v] = 1;
    for (int i = 1; i <= n; i++) {
        if (A[v][i] == 1 && PLUS[i] == 0) {
            dfs_positive(i);
        }
    }
}

void dfs_negative(int v) {
    MINUS[v] = 1;
    for (int i = 1; i <= n; i++) {
        if (A[i][v] == 1 && MINUS[i] == 0) {
            dfs_negative(i);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        A[a][b] = 1;
    }

    nrc = 0;
    PLUS.resize(n + 1);
    MINUS.resize(n + 1);

    for (int i = 1; i <= n; i++) {
        if (VIZ[i] == 0) {
            fill(PLUS.begin(), PLUS.end(), 0);
            fill(MINUS.begin(), MINUS.end(), 0);
            dfs_positive(i);
            dfs_negative(i);
            nrc++;

            for (int v = 1; v <= n; v++) {
                if (PLUS[v] == 1 && MINUS[v] == 1) {
                    VIZ[v] = nrc;
                }
            }
        }
    }

    int inutile = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i][j] == 1 && VIZ[i] != VIZ[j]) {
                inutile++;
            }
        }
    }

    cout << inutile << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i][j] == 1 && VIZ[i] != VIZ[j]) {
                cout << i << " " << j << "\n";
            }
        }
    }

    return 0;
}
