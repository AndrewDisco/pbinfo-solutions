#include <iostream>
#include <vector>

using namespace std;

void generateBinaryStrings(int n, vector<int>& arr, int i) {
    if (i == n) {
        for (int j = 0; j < n; j++)
            cout << arr[j];
        cout << '\n';
        return;
    }

    arr[i] = 0;
    generateBinaryStrings(n, arr, i + 1);

    arr[i] = 1;
    generateBinaryStrings(n, arr, i + 1);
}

int n;

int main() {
    cin >> n;

    vector<int> arr(n);

    generateBinaryStrings(n, arr, 0);

    return 0;
}
