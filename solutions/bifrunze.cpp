#include <bits/stdc++.h>

using namespace std;

ifstream in("bifrunze.in");
ofstream out("bifrunze.out");

struct Node {
    int value;
    int left;
    int right;
};

int n;

int main()
{
    in >> n;
    vector<Node> nodes(n+1);

    for (int i=1; i<=n; ++i) {
        int value, left, right;
        in >> value >> left >> right;
        nodes[i] = {value, left, right};
    }

    for (int i=1; i<=n; ++i) {
        if (nodes[i].left == 0 && nodes[i].right == 0) {
            out << i << " ";
        }
    }

    return 0;
}
