#include <bits/stdc++.h>

using namespace std;

string deCitit;

bool eVocala(char ra){
    if(ra == 'a' || ra == 'e' || ra == 'i' || ra == 'o' || ra == 'u')
        return true;
    return false;
}

int main() {
    getline(cin, deCitit);

    for(auto ch : deCitit){
        if(eVocala(ch))
            cout << (char) toupper(ch);
        else
            cout << ch;
    }

    return 0;
}
