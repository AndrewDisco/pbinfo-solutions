#include <bits/stdc++.h>

using namespace std;

ifstream fin("unice1.in");
ofstream fout("unice1.out");

int n, cnt;

map<int, int> frq; // folosesc map de frecventa
// nu cred ca e necesar map, solutia e aceeasi si cu vector

int main() {
    fin >> n;

    for(int i = 1; i <= n; ++i) {
        int x;
        fin >> x;
        frq[x]++;
    }

    for(auto it : frq) {
        if(it.second == 1) {
            ++cnt;
        }
    }

    fout << cnt;

    return 0;
}