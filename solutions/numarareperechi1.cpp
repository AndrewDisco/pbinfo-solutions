#include <bits/stdc++.h>

using namespace std;

int n, cnt;
map<int, int> frq;
vector<int> numbers;

int main() {
    cin >> n;
    numbers.resize(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; ++i) {
        int cifra = (numbers[i] / 10) % 10;
        frq[cifra]++;
    }

    long long pairuri = 0;

    for (auto it : frq) {
        long long freq = it.second;
        pairuri += (freq * (freq - 1)) / 2;
    }

    cout << pairuri;
    return 0;
}
