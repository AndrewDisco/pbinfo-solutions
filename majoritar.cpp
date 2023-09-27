#include <bits/stdc++.h>

using namespace std;

int n;
map<int, int> frq;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        frq[x]++;
    }

    for(auto & it : frq){
        if(it.second > n/2){
            cout << "DA " << it.first;
            return 0;
        }
    }
    
    cout << "NU";
    
    return 0;
}