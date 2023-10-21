#include <bits/stdc++.h>

using namespace std;

int calcMinDiv(int num){
    int numDiv = INT_MAX;

    for(int i=2; i*i<=num; ++i){
        if(num%i == 0){
            if(numDiv > i)
                numDiv = i;
            if(num/i != i && i < numDiv)
                numDiv = num/i;
        }
    }

    return numDiv;
}

int n, mini;

int main()
{
    cin >> n;
    mini = calcMinDiv(n);
    cout << mini * mini;

    return 0;
}
