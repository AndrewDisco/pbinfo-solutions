#include <bits/stdc++.h>

using namespace std;

int n, m, cntm, cntn;

int main() {
    cin >> n >> m;

    for(int j=1; ; j+=2){
        if(cntm == m){
            cout << '\n';
            ++cntn;
            cntm = 0;
        }
        if(cntn == n) break;

        cout << j*j << " ";
        ++cntm;
    }
    return 0;
}