#include <bits/stdc++.h>
#define ll long long

using namespace std;

ifstream in("nrdiv.in");
ofstream out("nrdiv.out");

ll nMax = 1e13;
ll sqrt_vmax = sqrt(nMax);
vector<bool> v(sqrt_vmax / 2, false);
vector<ll> prime;

void ciur() {
    for (int i = 1; ((i * i) << 1) + (i << 1) <= sqrt_vmax; ++i)
        if (!v[i])
            for (int j = ((i * i) << 1) + (i << 1); (j << 1) + 1 <= sqrt_vmax; j += ((i << 1) + 1))
                v[j] = 1;

    prime.push_back(2);
    for (int i = 3; i <= sqrt_vmax; i += 2)
        if (!v[i / 2])
            prime.push_back(i);
}

int findDiv(ll a) {
    int nr = 1;

    for (ll p : prime) {
        if (p * p > a) break;
        int cnt = 0;
        while (a % p == 0) {
            a /= p;
            ++cnt;
        }
        nr *= (cnt + 1);
    }

    if (a > 1) {
        nr *= 2;
    }

    return nr;
}

int n;

int main() {
    in >> n;

    ciur();

    for (int i = 0; i < n; ++i) {
        ll temp;
        in >> temp;
        out << findDiv(temp) << '\n';
    }

    return 0;
}
