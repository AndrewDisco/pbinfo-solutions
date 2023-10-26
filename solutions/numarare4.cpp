#include <bits/stdc++.h>

using namespace std;

vector<int> sir;
int n, cnt;

int main() {
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        sir.push_back(x);
    }

    for(auto it : sir){
        if(__gcd(it, sir[n - 1]) == 1) {
            ++cnt;
        }
    }

    cout << cnt;

    return 0;
}
