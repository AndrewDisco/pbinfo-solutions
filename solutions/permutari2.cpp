#include <bits/stdc++.h>

using namespace std;

ifstream in("permutari2.in");
ofstream out("permutari2.out");

int n;
vector<int> v;

int main() {
    in >> n;
    v.resize(n);

    for(auto& it : v)
        in >> it;

    sort(v.begin(), v.end());

    do {
        for(auto& it : v)
            out << it << " ";
        out << "\n";
    } while(next_permutation(v.begin(), v.end()));

    return 0;
}
