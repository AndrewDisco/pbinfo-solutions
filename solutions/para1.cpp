#include <bits/stdc++.h>

using namespace std;

int n;
char c;

int main() {
    cin >> n >> c;

    for (int i = 1; i <= n; ++ i) {
        for (int j = 1; j <= i; ++ j) {
            cout << c;
        }
        cout << '\n';
    }

    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++ j) {
            cout << ' ';
        }
        for (int j = 1; j <= i; ++ j) {
            cout << c;
        }
        cout << '\n';
    }


    return 0;
}
