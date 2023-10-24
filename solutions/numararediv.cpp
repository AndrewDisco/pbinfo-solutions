#include <bits/stdc++.h>

using namespace std;

int calcDivNum(int num){
    int cnt = 0;

    for(int i=1; i<=sqrt(num); ++i){
        if(num%i == 0){
            if(num/i != i)
                cnt += 2;
            else
                ++cnt;
        }
    }

    return cnt;
}

int n;
map<int, int> frq;

int main() {
    cin >> n;

    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;

        ++frq[calcDivNum(temp)];
    }
    
    int cnt = 0;
    
    for(auto it : frq)
        cnt += (it.second*(it.second-1))/2;

    cout << cnt;

    return 0;
}
