#include <bits/stdc++.h>

using namespace std;

int n, cnt;
long long currMax = LLONG_MIN;

int main() {
    cin >> n;

    for(int i=0; i<n; ++i){
        long long temp;
        cin >> temp;

        if(temp > currMax){
            currMax = temp;
            cnt = 1;
        }
        else if(temp == currMax){
            ++cnt;
        }
    }

    cout << currMax << " " << cnt;

    return 0;
}