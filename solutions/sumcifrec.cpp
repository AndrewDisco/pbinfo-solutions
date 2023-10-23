#include<bits/stdc++.h>

using namespace std;

int sumcif(int num){
    if(!num)
        return 0;
    return(num%10 + sumcif(num/10));
}