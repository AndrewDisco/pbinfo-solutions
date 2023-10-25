#include <bits/stdc++.h>

using namespace std;

ifstream in("paranteze1.in");
ofstream out("paranteze1.out");

unsigned short cer;

int main() {
    in >> cer;
    in.ignore();

    for(unsigned short i = 0; i<cer; ++i){
        string temp;
        bool corect = true;
        stack<int> stiva;

        getline(in, temp);
        //out << temp << " ";

        for(auto ch : temp){
            if(ch == '(')
                stiva.push(ch);
            else if(ch == ')') {
                if(!stiva.empty() && stiva.top() == '(')
                    stiva.pop();
                else{
                    corect = false;
                    break;
                }
            }
        }

        if(!stiva.empty())
            corect = false;

        out << corect << '\n';
    }

    return 0;
}
