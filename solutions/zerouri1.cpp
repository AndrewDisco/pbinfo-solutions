#include <bits/stdc++.h>

using namespace std;

int n;
long long pr=1;
int doiCnt, cinciCnt;

int main() {
    cin >> n;

    for(int i=0; i<n; ++i){
        long long temp;
        cin >> temp;

        while(temp % 2 == 0){
            temp /= 2;
            ++doiCnt;
        }

        while(temp % 5 == 0){
            temp /= 5;
            ++cinciCnt;
        }

        pr *= (temp%10);
        pr = pr % 10;
    }

    while(doiCnt > cinciCnt){
        pr *= 2;
        pr = pr % 10;
        --doiCnt;
    }

    while(cinciCnt > doiCnt){
        pr *= 5;
        pr = pr % 10;
        --cinciCnt;
    }

    cout << pr;

    return 0;
}
