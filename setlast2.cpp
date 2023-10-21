#include <bits/stdc++.h>

using namespace std;

long long num;

int main() {
    cin >> num;
    bitset<64> b(num);

    b |= 3;
    
    /*
     * original b:  1011000110101
     * 3 in binar:  0000000000011
     * rezultat:    1011000110111
     */
    
    cout << static_cast<long long>(b.to_ullong());

    return 0;
}
