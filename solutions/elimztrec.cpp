#include <bits/stdc++.h>

using namespace std;

int ElimZTRec(int n){
    if(n%10==0)
        return ElimZTRec(n/10);
    else
        return n;
}

