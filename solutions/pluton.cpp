#include <bits/stdc++.h>

using namespace std;

ifstream in("pluton.in");
ofstream out("pluton.out");

struct ident{
    string id;
    int mar;
    vector<int> frq;
};

bool cmp(ident a, ident b){
    return a.mar < b.mar;
}

bool eq(vector<int> &a, vector<int> &b){
    for(int i=0; i<10; ++i){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

int n;
vector<ident> a;

int main()
{
    in >> n;
    a.resize(n);
    for(auto& it : a){
        in >> it.id;
        it.mar=it.id.size();
        it.frq.resize(10, 0);
        for(auto& ch : it.id)
            ++it.frq[ch-'0'];
    }

    sort(a.begin(), a.end(), cmp);

    vector<vector<int>> pluton;

    for(int i=0; i<n; ++i){
        bool ok = false;
        for(auto &p : pluton){
            if(eq(a[i].frq, a[p[0]].frq)){
                p.push_back(i);
                ok = true;
                break;
            }
        }

        if(!ok)
            pluton.push_back({i});
    }

    int maxiS = 0, maxiC = 0;

    for(auto &p : pluton){
        if(p.size() > maxiS){
            maxiS = p.size();
            maxiC = 1;
        } else if(p.size() == maxiS)
            maxiC++;
    }

    out << pluton.size() << '\n' << maxiS << '\n' << maxiC << '\n';

    for(auto &p : pluton){
        if(p.size() == maxiS){
            for(int i : p){
                out << a[i].id << " ";
            }
            break;
        }
    }

    return 0;
}
