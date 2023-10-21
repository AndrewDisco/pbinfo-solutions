#include <bits/stdc++.h>

using namespace std;

void prefix(int n, int k, int& result) {
    while (k < (int)log10(n) + 1) {
        n /= 10;
    }
    result = n;
}
