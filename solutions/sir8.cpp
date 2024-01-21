#include <bits/stdc++.h>

using namespace std;

string genNext(const string& str) {
    string ans = "";
    int cnt = 1, ssize = str.size();

    for (int i=0; i<ssize; ++i) {
        while (i<ssize-1 && str[i] == str[i+1]) {
            ++cnt, ++i;
        }

        ans += to_string(cnt)+str[i];
        cnt=1;
    }

    return ans;
}

string findN(int n) {
    if (n == 1) {
        return "1";
    }

    string curr = "1";
    for (int i=2; i<=n; ++i)
        curr = genNext(curr);

    return curr;
}

int n;

int main() {
    cin >> n;
    cout << findN(n);

    return 0;
}
