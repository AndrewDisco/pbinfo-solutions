#include <bits/stdc++.h>

using namespace std;

int calcDivSum(int num){
    int sum = 0;

    for(int i=1; i*i<=num; ++i){
        if(num%i == 0){
            if(num/i != i){
                sum += (i + num/i);
            }

            else{
                sum += i;
            }

        }
    }

    return sum;
}

int n;
map<int, int> frq;

int main() {
    cin >> n;

    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;

        ++frq[calcDivSum(temp)];
    }

    int cnt = 0;

    for(auto it : frq)
        cnt += (it.second*(it.second-1))/2;

    cout << cnt;

    return 0;
}
