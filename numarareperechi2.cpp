#include <bits/stdc++.h>

using namespace std;

int n, cnt;
vector<int> sir;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sir.push_back(x);
    }

    int mid = sir.size()/2;
    int sizeul = sir.size();

    for(int i=0; i<mid; ++i){
        if((sir[i]/10)%10 == (sir[sizeul-i-1]/10)%10){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}