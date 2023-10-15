#include <bits/stdc++.h>

using namespace std;

void P(int& n, int c) {
    string toRetu = "";
    string initial = to_string(n);

    string cif = to_string(c);

    for (auto const& ch : initial) {
        if (ch != cif[0]) {
            toRetu += ch;
        }
    }

    if (toRetu.empty()) {
        n = 0;
    } else {
        n = stoi(toRetu);
    }
}
