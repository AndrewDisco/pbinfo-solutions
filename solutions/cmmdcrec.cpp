#include<bits/stdc++.h>

using namespace std;

int cmmdc(int num1, int num2)
{
    if (num2)
        return cmmdc(num2, num1 % num2);
    else
        return num1;
}