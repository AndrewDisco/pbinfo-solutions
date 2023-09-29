#include <bits/stdc++.h>

using namespace std;

int n;
char c;

int main() {
    cin >> n >> c;

    //acelasi lucru cu #para1 dar reverse

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++ j) {
            cout << ' ';
        }
        for (int j = 1; j <= i; ++ j) {
            cout << c;
        }
        cout << '\n';
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = n; j >= i; -- j) {
            cout << c;
        }
        cout << '\n';
    }


    return 0;
}
