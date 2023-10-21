#include <bits/stdc++.h>

using namespace std;

long long num;
int bit;

int main() {
    cin >> num >> bit;
    bitset<64> b(num);

    b.reset(bit);
    cout << static_cast<long long>(b.to_ullong());

    return 0;
}
