#include <bits/stdc++.h>

using namespace std;

stack<int> stiva;
string currCommand;

int currN, comenzi;

int main()
{
    cin >> comenzi;

    for(int i = 0; i < comenzi; ++i){
        cin >> currCommand;

        if(currCommand == "push"){
            cin >> currN;
            stiva.push(currN);
        }
        else if(currCommand == "pop")
            stiva.pop();
        else{
            cout << stiva.top() << '\n';
        }
    }

    return 0;
}
