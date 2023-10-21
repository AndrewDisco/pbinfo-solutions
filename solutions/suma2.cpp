#include <bits/stdc++.h>

using namespace std;

vector<int> sir;
int n;
int ok1, lastPar;
unsigned long long suma;

int main()
{
    cin >> n;

    for(int i=0; i<n; ++i){
        int x;
        cin >> x;

        if(x%2==0 && !ok1)
            ok1=1;

        if(ok1)
            sir.push_back(x);

        if(x%2==0){
            lastPar = sir.size();
        }
    }

    if(sir.empty()){
        cout << "NU EXISTA";
        return 0;
    }

    sir.push_back(100001);

    for(int i=0; i<lastPar; ++i){
        suma += sir[i];
    }

    cout << suma;

    return 0;
}
