#include <bits/stdc++.h>

using namespace std;

//solutie frumoasa, numele problemei indica
//folosirea unui map?
// :)

ifstream fin("map.in");
ofstream fout("map.out");

map<long long, int> frq;
int n;

int main() {
    fin >> n;

    for(int i=0; i<n; ++i){
        long long temp;
        fin >> temp;
        
        ++frq[temp];

        fout << frq[temp] << " ";
    }

    return 0;
}