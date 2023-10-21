#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectCube(long long n) {
    long long root = round(cbrt(n));
    return root*root*root == n;
}

int n;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        long long num;

        cin >> num;
        if(isPerfectCube(num)) {
            cout << "DA\n";
        } else {
            cout << "NU\n";
        }
    }
    return 0;
}
