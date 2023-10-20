#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int count = (b / 10) - ((a - 1) / 10);

    cout << count;

    return 0;
}
