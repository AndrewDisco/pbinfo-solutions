#include <bits/stdc++.h>

using namespace std;

ifstream in("xyz.in");
ofstream out("xyz.out");

int nrCif, prCif, urmCif;
string gasit;

int main()
{
    in >> nrCif >> prCif >> urmCif;

    gasit += to_string(prCif);
    for(int i=0; i<nrCif-1; ++i)
        gasit += to_string(urmCif);

    out << gasit;

    return 0;
}
