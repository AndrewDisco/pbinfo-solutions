#include <bits/stdc++.h>

using namespace std;

vector<int> sir;
int n;

map<int, int> frq;

int main()
{
    cin >> n;

    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        
        sir.push_back(x);
        frq[x]++;
    }
    
    for(auto it : frq){
        if(it.second > 1){
            cout << "NU";
            return 0;
        }
    }
    
    cout << "DA";
    
    return 0;
}
