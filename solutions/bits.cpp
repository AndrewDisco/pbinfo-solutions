#include <bits/stdc++.h>

using namespace std;
//rezolvare demna de nota 10

ifstream in("bits.in");
ofstream out("bits.out");

unsigned long long num;
int q;

int main(){
    in >> num;
    bitset<63> setBitul = num;
    in >> q;

    for(int i=0; i<q; ++i){
        int bitNum;
        in >> bitNum;

        out << setBitul[bitNum];
    }

}