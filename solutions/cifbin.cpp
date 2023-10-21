#include <iostream>

using namespace std;

int n,cnt0,cnt1,rezultat, putere=1;

int main()
{
    cin >>n;
    while(n)
    {
        int rest = n % 2;
        rezultat = rezultat + rest * putere;
        putere = putere * 10;
        n/=2;
        if(rest==0) ++cnt0;
        else ++cnt1;
    }
    cout << cnt0 << " " << cnt1;
    return 0;
}