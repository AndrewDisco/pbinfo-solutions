#include<bits/stdc++.h>

using namespace std;

int a;
vector<int> cifre;

int main() {
    cin >> a;
    while(a) {
        cifre.push_back(a % 10);
        a /= 10;
    }
    sort(cifre.begin(), cifre.end());
    
    for(int it : cifre) {
        cout << it << " ";
    }

    return 0;
}
