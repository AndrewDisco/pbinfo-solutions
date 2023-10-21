#include <bits/stdc++.h>

using namespace std;

int n, cnt;
vector<int> sir;

int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sir.push_back(x);
    }

    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(gcd(sir[i], sir[j]) == 1){
                ++cnt;
            }
        }
    }

    cout << cnt;
    return 0;
}