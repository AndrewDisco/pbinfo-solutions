#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;

    if (n % 2 == 0) {
        for (int i=0; i<n/2-1; ++i) {
            cout << 9;
        }

        cout << 8;

        for (int i=0; i<n/2; ++i) {
            cout << 9;
        }
    } else {
        for (int i=0; i<n/2-1; ++i) {
            cout << 9;
        }

        cout << 8;

        for (int i=0; i<n/2+1; ++i) {
            cout << 9;
        }
    }

    return 0;
}
