#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cuburi(n);

    for (int i = 0; i < n; i++) {
        cin >> cuburi[i];
    }

    map<int, int> frecventa;

    for (int i = 0; i < n; i++) {
        frecventa[cuburi[i]]++;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int dimensiune_cub;
        cin >> dimensiune_cub;

        if (frecventa.find(dimensiune_cub) != frecventa.end()) {
            cout << 1LL * dimensiune_cub * frecventa[dimensiune_cub] << " ";
        } else {
            cout << "0 ";
        }
    }

    cout << endl;

    return 0;
}
