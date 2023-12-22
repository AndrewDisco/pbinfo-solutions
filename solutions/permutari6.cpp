#include <bits/stdc++.h>

using namespace std;

int a,b;
vector<int> v;

int main() {
    cin >> a >> b;

    for(int i=a; i<=b; ++i)
        v.push_back(i);

    do {
        for(auto& it : v)
            cout << it << " ";
        cout << "\n";
    } while(next_permutation(v.begin(), v.end()));

    return 0;
}
