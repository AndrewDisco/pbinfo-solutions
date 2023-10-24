#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> sir;

bool cmp(int a, int b){
    return a>b;
}

int main() {
    cin >> n;

    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;

        sir.push_back(temp);
    }

    sort(sir.begin(), sir.end(), cmp);

    for(auto it = 0; it<2; ++it)
        cout << sir[it] << " ";

    return 0;
}
