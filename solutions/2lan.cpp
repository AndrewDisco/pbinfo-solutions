#include <bits/stdc++.h>
using namespace std;

ifstream fin("2lan.in");
ofstream fout("2lan.out");

int n;

int main() {
    fin >> n;
    int result = 1;
    for (int i = 0; i < n; i++) {
        result = (result * 2) % 10;
    }
    fout << result;
    return 0;
}