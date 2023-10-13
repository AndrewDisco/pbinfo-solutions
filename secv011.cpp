#include <fstream>
#define MIL 2000000

using namespace std;

ifstream fi("secv011.in");
ofstream fo("secv011.out");

int MAP[3000001];
int n;
int d;
long long rez;

int main()
{
    fi>>n;
    d=0;

    MAP[MIL+d]=1;

    for (int i=1;i<=n;i++)
    {
        int x;
        fi>>x;
        if (x==1)
            d++;
        else
            d-=2;
        MAP[MIL+d]++;
    }
    rez=0;
    for (int i=0;i<=3000000;i++)
        if (MAP[i]>1)
        {
            int v;
            v=MAP[i];
            rez=rez+(long long)v*(v-1)/2;
        }
    fo<<rez;
    fi.close();
    fo.close();
    return 0;
}