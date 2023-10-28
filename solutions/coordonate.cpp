#include <bits/stdc++.h>

using namespace std;

int n, x, y, val;

int main() {
    cin >> n >> x >> y >> val;

    int V = (x - 1) * n + y;

    int i = (val - 1) / n + 1;
    int j = (val - 1) % n + 1;

    cout << V << " " << i << " " << j;

    return 0;
}
