#include <bits/stdc++.h>

using namespace std;

ifstream in("paritate.in");
ofstream out("paritate.out");

string input, output;
vector<int> wrong;

int main() {
    in >> input;
    int n = input.length();

    for (int i=0; i<n; i+=8) {
        int cnt1=0;

        for (int j=i+1; j<i+8; ++j)
            if (input[j] == '1')
                cnt1++;

        if (cnt1%2 == input[i]-'0') {
            int ascii_code = stoi(input.substr(i+1, 7), nullptr, 2);
            output += static_cast<char>(ascii_code);
        } else
            wrong.push_back(i/8);
    }

    if (wrong.empty()) {
        out << "DA" << '\n';
        for (const char &c : output) {
            if (c == 10) {
                out << '\n';
            } else {
                out << c;
            }
        }
    } else {
        out << "NU" << '\n';
        for (int i : wrong) {
            out << i << " ";
        }
    }

    return 0;
}
