#include <bits/stdc++.h>
using namespace std;

ifstream in("paranteze3.in");
ofstream out("paranteze3.out");

unsigned short n;

bool eParantezat(const string& s) {
    stack<char> parentheses;

    for (char ch : s) {
        if (ch == '(' || ch == '[') {
            parentheses.push(ch);
        } else if (ch == ')' || ch == ']') {
            if (parentheses.empty()) {
                return false;
            }

            char open = parentheses.top();
            if ((ch == ')' && open == '(') || (ch == ']' && open == '[')) {
                parentheses.pop();
            } else {
                return false;
            }
        }
    }

    return parentheses.empty();
}

int main() {
    in >> n;
    in.ignore();

    for (int i = 0; i < n; ++i) {
        string temp;
        getline(in, temp);
        
        int result = eParantezat(temp);
        out << result << '\n';
    }

    return 0;
}
