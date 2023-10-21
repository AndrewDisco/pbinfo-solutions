#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int digit1 = n % 10;
    n /= 10;
    int digit2 = n % 10;
    n /= 10;
    int digit3 = n;

    int sum = digit1 + digit2 + digit3;

    cout << sum;

    return 0;
}
