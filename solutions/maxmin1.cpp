#include <bits/stdc++.h>

using namespace std;

vector<int> firstArray, secondArray;
int n, m;

int main() {
    cin >> n;
    firstArray.resize(n);

    
    for (int i = 0; i < n; i++) {
        cin >> firstArray[i];
    }

    cin >> m;
    secondArray.resize(m);
    
    for (int i = 0; i < m; i++) {
        cin >> secondArray[i];
    }

    int maxSecondArray = *max_element(secondArray.begin(), secondArray.end());

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (firstArray[i] > maxSecondArray) {
            count++;
        }
    }

    cout << count;

    return 0;
}
