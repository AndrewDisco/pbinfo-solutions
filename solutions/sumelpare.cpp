#include <bits/stdc++.h>

using namespace std;

int sumOfLine(const vector<int>& line) {
    int sum = 0;

    for(int it : line) {
        if(it % 2 == 0)
            sum += it;
    }

    return sum;
}

int n,m;
vector<vector<int>> mat;
int maxSum = INT_MIN, ind;

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        vector<int> line;

        for(int j = 0; j < m; ++j) {
            int temp;
            cin >> temp;
            line.push_back(temp);
        }

        mat.push_back(line);
    }

    for(int i = 0; i < n; ++i) {
        int sum = sumOfLine(mat[i]);

        if(sum > maxSum) {
            maxSum = sum;
            ind = i;
        }
    }

    cout << ind+1;

    return 0;
}
