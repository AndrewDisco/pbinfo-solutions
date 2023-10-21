#include <iostream>
#include <cmath>

using namespace std;

int b,n,k,fin;

int main()
{
    cin >> b >> n;
    for(int i=n-1; i>=0; --i){
        cin >> k;
        fin+=k*pow(b,i);
    }
    cout << fin;
    return 0;
}