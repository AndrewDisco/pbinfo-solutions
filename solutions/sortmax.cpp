#include <bits/stdc++.h>

using namespace std;

int n, currMax=INT_MIN;
vector<int> a, b, sir;

int main() {
    cin >> n;

    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;

        sir.push_back(temp);

        if(currMax < temp)
            currMax = temp;
    }

    bool ok = false;

    for(auto it : sir){
        if(it == currMax)
            ok=true;
        if(ok){
            b.push_back(it);
        }
        else {
            a.push_back(it);
        }
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    for(auto it: a){
        cout << it << " ";
    }
    for(auto it : b){
        cout << it << " ";
    }

    return 0;
}