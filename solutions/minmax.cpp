#include <bits/stdc++.h>

using namespace std;

ifstream input("minmax.in");
ofstream output("minmax.out");

int n;
vector<int> values;

int main() {
    input >> n;

    values.resize(n);

    for (int i = 0; i < n; i++) {
        input >> values[i];
    }

    int minim = *min_element(values.begin(), values.end());
    int maxim = *max_element(values.begin(), values.end());

    output << minim << " " << maxim << endl;

    return 0;
}
