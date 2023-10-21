#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MOD = 1000000007;

ll fastExpo(ll base, ll power) {
    ll result = 1;
    while (power > 0) {
        if (power % 2 == 1)
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        power /= 2;
    }
    return result;
}

int N;

int main() {
    cin >> N;

    ll maxStacks = fastExpo(2, N) - 1;
    ll maxBoxes = (fastExpo(2, N + 1) - N - 2 + MOD) % MOD;

    cout << maxStacks << " " << maxBoxes << endl;

    return 0;
}