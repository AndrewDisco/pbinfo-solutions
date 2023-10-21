#include <bits/stdc++.h>

using namespace std;

ifstream in("maxim.in");
ofstream out("maxim.out");

int a,b;

int main() {
    in >> a >> b;
    out << max(a,b);
    return 0;
}