#include <bits/stdc++.h>

using namespace std;

vector<int> sir, sirSortat;
int n;

int main()
{
    cin >> n;

    for(int i=0; i<n; ++i){
        int x;
        cin >> x;

        sir.push_back(x);
    }

    sirSortat = sir;
    sort(sirSortat.begin(), sirSortat.end());

    if(sir == sirSortat){
        cout << "DA";
    }else{
        cout << "NU";
    }

    return 0;
}
