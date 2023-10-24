#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> sir;

int main() {
    cin >> n;

    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;

        sir.push_back(temp);
    }

    sort(sir.begin(), sir.end());

    for(auto it = 2; it>=0; --it)
        cout << sir[it] << " ";

    return 0;
}
