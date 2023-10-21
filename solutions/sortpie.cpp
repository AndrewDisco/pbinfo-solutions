#include <bits/stdc++.h>

using namespace std;

vector<int> sir;
vector<int> sirFinal;

int n;

bool revCmp(int a, int b){
    return (a>b);
}

int main()
{
    cin >> n;

    for(int i=0; i<n; ++i){
        int x;
        cin >> x;

        sir.push_back(x);
    }

    for(auto elem : sir){
        if(__gcd(elem, sir[n-1]) == 1)
           sirFinal.push_back(elem);
    }

    sort(sirFinal.begin(), sirFinal.end(), revCmp);

    for(auto elem : sirFinal)
        cout << elem << " ";
    return 0;
}
