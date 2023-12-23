#include <bits/stdc++.h>
using namespace std;

int n, s1, s2=1; // nu impartim cu 0 lmao
vector<pair<int, int>> v;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    cin >> n;
    v.resize(n);

    for (auto& it : v)
        cin >> it.first >> it.second;

    for (const auto& it : v) {
        s1 = s1 * it.second + it.first * s2;
        s2 = s2 * it.second;

        int g = gcd(s1, s2);

        s1 /= g;
        s2 /= g;
    }

    cout << s1 << " " << s2;
    return 0;
}
