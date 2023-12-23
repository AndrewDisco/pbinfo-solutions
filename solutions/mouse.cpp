#include <bits/stdc++.h>

using namespace std;

ifstream in("mouse.in");
ofstream out("mouse.out");

int n, m, mini=INT_MAX;
int s;

int main()
{
    in >> n >> m;

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            int temp;
            in >> temp;

            if((i!=1 || j!=1) && (i!=n || j!=m) && (i%2==1 || j%2==1))
                mini = min(temp, mini);
            s+=temp;
        }
    }

    if(n%2==0 && m%2==0)
        out << n*m-1 << " " << s-mini;
    else
        out << n*m << " " << s;

    return 0;
}
