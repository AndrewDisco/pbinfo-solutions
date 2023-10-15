#include <bits/stdc++.h>

using namespace std;

int patr;
unsigned long long sum = 1;

int main() {
    cin >> patr;

    for(int i=1; i<=patr; ++i){
        sum *= i*i;
    }

    cout << sum;

    return 0;
}