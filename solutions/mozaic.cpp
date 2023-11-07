#include <bits/stdc++.h>

using namespace std;

vector<int> get_divisors(int n) {
    vector<int> divisors;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if(n/i != i)
                divisors.push_back(n/i);
        }
    }
    return divisors;
}

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int count_coprime_pairs(const vector<int>& divisors) {
    int cnt = 0;

    for (int i = 0; i < divisors.size(); i++) {
        for (int j = i; j < divisors.size(); j++) {
            if (gcd(divisors[i], divisors[j]) == 1) {
                cnt++;
            }
        }
    }

    return cnt;
}

int main() {
    int T, N;
    cin >> T >> N;
    vector<int> divisors = get_divisors(N);

    if (T == 1) {
        sort(divisors.begin(), divisors.end());

        for (int d : divisors) {
            cout << d << " ";
        }
    } else {
        cout << count_coprime_pairs(divisors);
    }

    return 0;
}
