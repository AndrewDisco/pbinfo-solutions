#include <bits/stdc++.h>

using namespace std;

vector<int> sir;
int n;
int cnt;
unsigned long long media;

int main()
{
    cin >> n;

    for(int i=0; i<n; ++i){
        int x;
        cin >> x;

        sir.push_back(x);
        media += x;
    }

    media /= sir.size();

    for(auto it : sir){
        if(it > media)
            ++cnt;
    }

    cout << cnt;

    return 0;
}
