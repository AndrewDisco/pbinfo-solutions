#include <bits/stdc++.h>

using namespace std;

int sumCif(int num){
    int sum = 0;
    while(num){
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

map<int, int> frq;
int n;

int main() {
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        frq[sumCif(x)]++;
    }
    
    int ans = 0;
    for(auto it : frq){
        ans += (it.second * (it.second - 1)) / 2;
    }

    cout << ans;

    return 0;
}
