#include <bits/stdc++.h>

using namespace std;

long num;

int main() {
    cin >> num;
    bitset<32> b(num);

    for (int i = 0; i < 32; i++) {
        if (b[i]) {
            b[i] = 0;
            break;
        }
    }

    cout << static_cast<long>(b.to_ulong());

    return 0;
}
