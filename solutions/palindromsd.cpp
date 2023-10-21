#include <bits/stdc++.h>

using namespace std;

ifstream in("palindromsd.in");
ofstream out("palindromsd.out");

bool isPalindrom(string s) {
    int n = s.size();
    for(int i = 0; i < n / 2; ++i) {
        if(s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

vector<string> v;

int main() {
    string s;
    while(in >> s) {
        if(isPalindrom(s)) {
            v.push_back(s);
        }
    }

    if(v.size() == 0) {
        out << "-1";
        return 0;
    }

    //le dam out la nebuni
    int n = v.size();
    for (int i = 0; i < n / 2; ++i) {
        out << v[i] << " " << v[n - i - 1] << " ";
    }

    //caz special, nr impar de nr
    if (n % 2 != 0) {
        out << v[n / 2] << " ";
    }

    return 0;
}