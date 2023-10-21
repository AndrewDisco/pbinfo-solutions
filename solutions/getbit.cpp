#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    for(int i=0; i<n; ++i){
        long long num;
        int bit;

        cin >> num >> bit;
        bitset<64> b(num);

        cout << b[bit];
    }

    return 0;
}
