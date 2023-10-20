#include <bits/stdc++.h>

using namespace std;

ifstream fin("magie.in");
ofstream fout("magie.out");

int n, cer1;
map<int, int> frq; // frecventa persoanelor (wow)

int main() {
    fin >> n;

    for(int i=0; i<n; ++i){
        int temp;
        fin >> temp;

        ++frq[temp];
    }

    int curMax = INT_MIN;

    for(auto it : frq){
        if(it.first == 2005)
            cer1 = it.second;

        auto copie = it.first;
        int suma = 0;

        while(copie){
            suma += copie%10;
            copie /= 10;
        }

        if(suma > curMax)
            curMax = suma;
    }

    fout << cer1 << '\n' << curMax;

    return 0;
}
