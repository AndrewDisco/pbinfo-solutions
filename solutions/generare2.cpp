#include <bits/stdc++.h>

using namespace std;

int n, a, x, y;
set<int> M;

int main() {
    cin >> n >> a >> x >> y;

    M.insert(a);

    for (int element : M) {
        if (element + x <= n) {
            M.insert(element + x);
        }
        if (element + y <= n) {
            M.insert(element + y);
        }
    }

    for (int element : M) {
        cout << element << " ";
    }
    return 0;
}
