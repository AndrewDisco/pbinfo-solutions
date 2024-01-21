#include <bits/stdc++.h>

using namespace std;

ifstream in("cb3.in");
ofstream out("cb3.out");

int n, m;

int binarySearch(vector<int> &v, int x){
    int l = 0, r = v.size();

    while(l<r){
        int mid = (l+r)/2;

        if(v[mid]<=x)
            l = mid+1;
        else
            r = mid;
    }

    return l;
}

vector<int> a;

int main()
{
    in.tie(0);
    ios_base::sync_with_stdio(0);

    in >> n >> m;
    a.resize(n);
    
    for(auto& it : a)
        in >> it;
    
    sort(a.begin(), a.end());
    
    vector<int> par(n);
    par[0] = a[0];
    for(int i=1; i<n; ++i)
        par[i] = par[i-1] + a[i];

    for(int i=0; i<m; ++i){
        int temp;
        in >> temp;
        out << binarySearch(par, temp) << '\n';
    }
    return 0;
}
