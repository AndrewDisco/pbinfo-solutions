#include <bits/stdc++.h>

using namespace std;

int zerof(int n){
    int ans = 0;

    for(int i = 5; i <= n; i *= 5){
        ans += n / i;
    }

    return ans;
}