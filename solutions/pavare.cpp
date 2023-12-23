#include <bits/stdc++.h>

using namespace std;

int a,b;

int main() {
    cin >> a >> b;
    int miau = __gcd(a,b);
    cout << ((a*b)/miau)/miau << " " << miau;

    return 0;
}
