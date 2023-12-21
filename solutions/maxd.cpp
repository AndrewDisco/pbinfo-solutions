#include <bits/stdc++.h>

using namespace std;

ifstream fin("maxd.in");
ofstream fout("maxd.out");

int startval, endval;
int maxDivNum = INT_MIN, best = INT_MAX;

int calculateDiv(int num){
   int d = 2, p, nrdiv = 1;

   while(num > 1)
   {
       p = 0;

       while(num % d == 0)
       {
           ++p;
           num /= d;
       }

       if(p){
           nrdiv *= (p+1);
       }       ++d;

       if(d*d > num && num > 1){
            d = num;
       }

   }

   return nrdiv;
}

int main() {
    fin >> startval >> endval;

    int cnt = 0;

    for(int i=startval; i<=endval; ++i){
        int tempDivNum = calculateDiv(i);

        if(maxDivNum < tempDivNum){
            best = i;
            maxDivNum = tempDivNum;
            cnt = 1;
        }
        else if(maxDivNum == tempDivNum){
            if(i<best)
                best = i;
            ++cnt;
        }
    }

    fout << best << " " << maxDivNum << " " << cnt;
    return 0;
}
