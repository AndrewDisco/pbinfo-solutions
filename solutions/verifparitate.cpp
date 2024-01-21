#include<bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;

    for(int i=0; i<n; ++i){
        unsigned long long temp;
        cin >> temp; bitset<64> cc(temp);
        cout << cc[0] << " ";
    }
}
