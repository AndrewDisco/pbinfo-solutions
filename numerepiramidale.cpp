#include <iostream>
#include <vector>

using namespace std;

int n;
int main() {
    cin >> n;

    vector<long long> pyramid(n+1, 0);

    for(int i = 1; i <= n; i++) {
        pyramid[i] = pyramid[i-1] + i*i;

        cout << pyramid[i] << " ";
    }
    return 0;
}
