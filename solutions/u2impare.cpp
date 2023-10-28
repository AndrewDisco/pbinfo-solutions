#include <bits/stdc++.h>

using namespace std;

long long n;

int main() {
    cin >> n;

    long long odd1 = (n % 2 == 0) ? n - 1 : n - 2;
    long long odd2 = (odd1 % 2 == 0) ? odd1 - 1 : odd1 - 2;

    cout << odd2 << " " << odd1 << endl;

    return 0;
}
