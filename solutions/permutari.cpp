#include <bits/stdc++.h>

using namespace std;

ifstream in("permutari.in");
ofstream out("permutari.out");

int n;
vector<int> v;

int main() {
    in >> n;
    v.resize(n);

    for(int i = 0; i < n; i++)
        v[i] = i + 1;
    
    do {
        for(auto& it : v)
            out << it << " ";
        out << "\n";
    } while(next_permutation(v.begin(), v.end()));

    return 0;
}
