#include <bits/stdc++.h>

using namespace std;

vector<int> sir;
vector<int> sirFinal;

int n,k;

bool revCmp(int a, int b){
    return (a>b);
}

int main()
{
    cin >> n >> k;

    for(int i=0; i<k; ++i){
        int x;
        cin >> x;

        sir.push_back(x);
    }

    for(int i=0; i<n-k; ++i){
        int x;
        cin >> x;

        sirFinal.push_back(x);
    }

    sort(sir.begin(), sir.end());

    sort(sirFinal.begin(), sirFinal.end(), revCmp);

    for(auto elem : sir)
        cout << elem << " ";
    for(auto elem : sirFinal)
        cout << elem << " ";
    return 0;
}
