#include <bits/stdc++.h>

using namespace std;

unsigned long long a, b, c;

int main() {
    cin >> a >>b;
    c = a*b/__gcd(a,b);

    cout << c/a+c/b-2; // lovituri pe a, b - start+inceput

    return 0;
}
