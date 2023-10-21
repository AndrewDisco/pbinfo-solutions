#include <bits/stdc++.h>

using namespace std;

int nr_div_imp(int num, int &resul){
    int cntDiv = 0;

    for(int i = 1; i * i <= num; i++){
        if(num % i == 0){
            if(i % 2 == 1){
                cntDiv++;
            }

            if(((num / i) % 2 == 1) && (i != (num / i))){
                cntDiv++;
            }
        }
    }

    resul = cntDiv;
    return resul;
}