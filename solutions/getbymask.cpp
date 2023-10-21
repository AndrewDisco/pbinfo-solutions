#include <bits/stdc++.h>

using namespace std;

int n, k;

int main() {
    cin >> n >> k;
    int rez = n & ((1 << k) - 1);
    //1<<k creeaza bitset cu ultimii k biti 0
    //1<<k - 1 creeaza bitset cu ultimii k biti 1 (inverseaza 1<<k)
    //n & ((1 << k) - 1) verifica care biti se potrivesc, deci raman doar ultimii k biti

    cout << rez;
    return 0;
}
