#include <bits/stdc++.h>

using namespace std;

int n,m;
vector<int> sume, finalSir;

int main(){
    cin >> n >> m;

    sume.resize(n+1);

    for(int i = 0; i < m; i++){
        int s,d,x;
        cin >> s >> d >> x;

        sume[s-1] += x;
        if(d < n)
            sume[d] -= x;
    }

    finalSir.resize(n);

    finalSir[0] = sume[0];

    for(int i = 1; i < n; i++){
        finalSir[i] = finalSir[i-1] + sume[i];
    }

    for(auto x : finalSir){
        cout << x << " ";
    }

    return 0;
}