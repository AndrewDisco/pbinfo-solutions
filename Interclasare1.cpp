#include <bits/stdc++.h>

using namespace std;

ifstream fin("interclasare1.in");
ofstream fout("interclasare1.out");

int n,m;
vector<int> sir;
map<int, int> frq;
int cnt;

int main()
{
    fin >> n;

    for(int i=0; i<n; ++i){
        int x;
        fin >> x;

        sir.push_back(x);
        ++frq[x];
    }

    fin >> m;

    for(int i=0; i<m; ++i){
        int x;
        fin >> x;

        if(!frq[x]){
            sir.push_back(x);
        }
    }

    sort(sir.begin(), sir.end());

    for(auto elem : sir){
        ++cnt;
        fout << elem << " ";
        if(cnt == 10){
            cnt = 0;
            fout << '\n';
        }
    }


    return 0;
}
