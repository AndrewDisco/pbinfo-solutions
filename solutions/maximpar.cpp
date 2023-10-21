#include <bits/stdc++.h>

using namespace std;

ifstream in("maximpar.in");
ofstream out("maximpar.out");

int n, cnt;
int currMax = INT_MIN;

int main() {
    in >> n;

    for(int i=0; i<n; ++i){
        int temp;
        in >> temp;

        if(temp > currMax && temp%2==0){
            currMax = temp;
            cnt = 1;
        }
        else if(temp == currMax){
            ++cnt;
        }
    }
    if(currMax != INT_MIN)
        out << currMax << " " << cnt;
    else
        out << "-1";

    return 0;
}