#include <bits/stdc++.h>

/*
* Când cu gene ostenite sara suflu-n lumânare,
* Doar ceasornicul urmează lung-a timpului cărare,
* Căci perdelele-ntr-o parte când le dai, și în odaie
* Luna varsă peste toate voluptoasa ei văpaie,
* Ea din noaptea amintirii o vecie-ntreagă scoate
* De dureri, pe care însă le simțim ca-n vis pe toate.
 */

using namespace std;

ifstream in("cladiri.in");
ofstream out("cladiri.out");

vector<string> cladiri;
int cl;
char maxVal = '0';

void cerUnu(){
    int cnt = 0;
    for(auto const& cladire : cladiri){
        for(auto const& ch : cladire){
            if(ch > maxVal){
                maxVal = ch;
            }
        }
    }

    out << maxVal << " ";

    for(auto const& cladire : cladiri){
        int inClad = 0;
        for(auto const& ch : cladire){
            if(ch == maxVal){
                ++cnt, inClad = 1;
            }
            if(inClad)
                break;
        }
    }

    out << cnt;
}

void cerDoi(){
    int cnt = 0;

    for(auto const& cladire : cladiri){
        string salv = cladire;
        reverse(salv.begin(), salv.end());

        if(salv == cladire)
            ++cnt;
    }

    out << cnt;
}

void cerTrei(){
    int rasp = 0;

    for(auto const& cladire : cladiri){
        string salv = cladire;
        reverse(salv.begin(), salv.end());

        for(int i=0; i<cladire.size(); ++i){
            int init = salv[i] - '0';
            int need = cladire[i] - '0';
            rasp += abs(need - init);
        }
    }

    out << rasp/2;
}

int main()
{
    in >> cl;
    cladiri.resize(cl);

    for(int i=0; i<cl; ++i){
        in >> cladiri[i];
    }

    cerUnu();
    out << '\n';
    cerDoi();
    out << '\n';
    cerTrei();


    return 0;
}
