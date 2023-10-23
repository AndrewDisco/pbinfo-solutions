#include<bits/stdc++.h>

using namespace std;

void afis() {
    int n;
    cin >> n;
    if (n != 0) {
        afis();
        cout << n << " ";
    }
    if(n==0)
        cout << 0 << " ";
}