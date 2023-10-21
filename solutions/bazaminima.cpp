#include <iostream>

using namespace std;

int n,nre,maxim;

int main()
{
    cin >>nre;
    for(int i=1; i<=nre; ++i){
        cin>>n;
        while(n){
            if(n%10 >= maxim) maxim=n%10;
            n/=10;
        }

    }
    cout << maxim+1;
    return 0;
}