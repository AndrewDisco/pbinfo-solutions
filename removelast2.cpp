#include <bits/stdc++.h>

using namespace std;

long long num;

int main() {
    cin >> num;
    bitset<64> b(num);

    b &= ~(bitset<64>(3));
    
    // ~ face operatia de not (inversul bitilor)
    // astfel & face operatia and intre numar si bitsetul care are ultimii 2 biti 0 (deci ii face 0)
    
    cout << static_cast<long long>(b.to_ullong());

    return 0;
}
