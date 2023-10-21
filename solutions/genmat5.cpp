#include <bits/stdc++.h>

using namespace std;

string num;

int main() {
    cin >> num;
    int n = num.size();

    for(int i=0; i<n; ++i) {
        for(int j=n-1; j>=0; --j) {
            cout << num[j] << " ";
        }
        cout << '\n';
    }
    return 0;
}