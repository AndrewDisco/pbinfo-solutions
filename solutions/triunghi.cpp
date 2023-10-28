#include <bits/stdc++.h>
using namespace std;

double a, b, c;

int main() {
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "da";
    } else {
        cout << "nu";
    }

    return 0;
}
