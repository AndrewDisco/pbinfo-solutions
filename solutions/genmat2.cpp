#include <iostream>

using namespace std;

int mat1[25][25],n;

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            //col princip
            if(i==j) mat1[i][j]=0;
            else {
                mat1[i][j]=n-j;
            }
        }
    }

    //afis
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            cout << mat1[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
