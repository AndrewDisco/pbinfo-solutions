#include <bits/stdc++.h>

using namespace std;

ifstream in("qclasa.in");
ofstream out("qclasa.out");

int n;

struct elev{
    int cod;
    int medie;
    int absente;
};

bool cmp(elev a, elev b){
    if(a.absente == b.absente)
        return (a.cod < b.cod);
    else
        return (a.absente > b.absente);
}

vector<elev> elevi;

int sumMedie;

int main()
{
    in >> n;

    for(int i=0; i<n; ++i){
        elev temp;
        in >> temp.cod >> temp.medie >> temp.absente;

        sumMedie += temp.medie;

        elevi.push_back(temp);

    }

    int cnt = 0;
    int doiElevi = 0;

    sort(elevi.begin(), elevi.end(), cmp);

    for(auto const& elem : elevi){
        //out << elem.cod << " " << elem.medie  << " " << elem.absente << '\n';
        if(elem.medie == 10)
            ++cnt;

    }

    out << cnt << '\n' << sumMedie/elevi.size() << '\n';

    for(auto const& elem : elevi){
        if(doiElevi < 2)
            out << elem.cod << " " << elem.medie  << " " << elem.absente << '\n';
        else
            break;
        ++doiElevi;
    }
    return 0;
}
