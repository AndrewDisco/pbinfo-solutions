#include <bits/stdc++.h>
using namespace std;

ifstream fin("9lan.in");
ofstream fout("9lan.out");

int n;

int main() {
    fin >> n;
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result = (result * 9) % 10;
    }
    fout << result;
    return 0;
}