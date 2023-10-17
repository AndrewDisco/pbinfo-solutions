#include <bits/stdc++.h>

using namespace std;

int num;

int main() {
    cin >> num;

    for(int i=1; i<=num; ++i) {
        for(int j=1; j<=num; ++j) {
            cout << (i*j)%10 << ' ';
        }
        cout << '\n';
    }
    return 0;
}