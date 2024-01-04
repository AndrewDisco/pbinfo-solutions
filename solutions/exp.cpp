#include <bits/stdc++.h>

using namespace std;

ifstream in("exp.in");
ofstream out("exp.out");

int m, n;
vector<int> v;
map<int, int> frq;

void descomp(int a){
    int d=2, p;

    while(a > 1){
        p=0;

        while(a%d == 0){
            ++p;
            a/=d;
        }

        if(p)
            frq[d] += p;

        ++d;

        if(a>1 && d*d>a)
            d=a;
    }
}

int main()
{
    in.tie(0);
    ios_base::sync_with_stdio(0);

    in >> m >> n;

    v.resize(n);

    for(auto& it : v){
        in >> it;
        descomp(it);
    }

    for(const auto& it : frq){
        if(it.second % m == 0)
            continue;
        else{
            out << 0;
            return 0;
        }
    }

    out << "1\n";

    for(const auto& it : frq)
        out << it.first << " " << it.second/m << "\n";

    return 0;
}