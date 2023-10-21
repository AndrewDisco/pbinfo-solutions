#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    bitset<3> b1(n >> 6); // da shift la biti 6 pozitii

    cout << static_cast<long>(b1.to_ulong());
    return 0;
}
