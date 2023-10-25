#include <bits/stdc++.h>

using namespace std;

ifstream in("paranteze2.in");
ofstream out("paranteze2.out");

string paranteze;
int cnt, parMax;

int main() {
    getline(in, paranteze);
    stack<char> stiva;

    for(auto ch : paranteze){
        if(ch == '('){
            stiva.push(ch);
            ++cnt;
        }
        else if(ch == ')'){
            stiva.pop();
            --cnt;
        }
        if(cnt > parMax)
            parMax = cnt;
    }

    out << parMax;

    return 0;
}
