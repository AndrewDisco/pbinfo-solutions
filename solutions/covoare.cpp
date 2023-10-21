#include <bits/stdc++.h>

using namespace std;

ifstream in("covoare.in");
ofstream out("covoare.out");

int n, m, cov;

int main()
{
    in >> n >> m >> cov;
    int camera[n][m];

    memset(camera, 0, sizeof(camera));

    for(int k=0; k<cov; ++k){
        int lung, lat, col;

        in >> lung >> lat >> col;

        for(int i=0; i<n; ++i){
            int ok = 0;

            for(int j=0; j<m; ++j){
                if(camera[i][j]==0){
                    for(int a=i; a<i+lat; ++a)
                        for(int b=j; b<j+lung; ++b)
                            camera[a][b]=col;
                    ok = 1; 
                    break;
                }

            }
            if(ok)
                break;
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j)
            out << camera[i][j] << " ";
        out << '\n';
    }
    return 0;
}
