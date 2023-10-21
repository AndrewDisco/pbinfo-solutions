#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> siruri;
int n;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        vector<int> sir;
        int x;
        cin >> x;
        for(int j = 0; j < x; j++){
            int y;
            cin >> y;
            sir.push_back(y);
        }
        siruri.push_back(sir);
    }

    for(int i = 0; i < n; i++){
        bool sorted = true;
        for(int j = 0; j < siruri[i].size() - 1; j++){
            if(siruri[i][j] > siruri[i][j + 1]){
                sorted = false;
                break;
            }
        }
        if(sorted){
            cout << "1 ";
        }else{
            cout << "0 ";
        }
    }

    return 0;
}
