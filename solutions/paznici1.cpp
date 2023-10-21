#include <bits/stdc++.h>

using namespace std;

int n , m;

int main() {
    cin >> n >> m;

    if(n%2==1)
        n++;

    if(m%2==1)
        m++;

    cout << 1LL * (n / 2) * (m / 2);
    return 0;
}