#include <bits/stdc++.h>

using namespace std;

ifstream in("chei.in");
ofstream out("chei.out");

vector<int> last;

int makeNew(int a, int b){
    string as = to_string(a), bs = to_string(b);
    return stoi(as.substr(as.size() - 1, 1) + (bs.empty() ? "0" : bs.substr(0, 1)));
}

bool isPrime(int a){
    if (a < 2)
        return false;
    if (a == 2)
        return true;
    if (a % 2 == 0)
        return false;
    else {
        for (int i = 3; i * i <= a; i += 2) {
            if (a % i == 0)
                return false;
        }
    }
    return true;
}


bool isFound(int a){
    for (int i=last.size()-1; i>=0 && i>last.size()-4; --i)
        if(last[i]==a)
            return true;
    return false;
}

vector<int> divi(int a){
    vector<int> b;

    int d=2, p=0;

    while(a>1){
        p=0;

        while(a%d==0){
            ++p;
            a/=d;
        }

        if(p)
            b.push_back(d);

        d++;

        if(d*d>a && a>1)
            d=a;
    }

    return b;
}

int curr = -2, x, y;
bool ok = 0;

int main()
{
    in >> x >> y;
    last.push_back(x);
    last.push_back(y);
    out << x << " " << y << " ";

    while (true) {
        curr = makeNew(last[last.size()-2], last[last.size()-1]);

        if (!isPrime(curr) && curr != 1) {
            vector<int> f = divi(curr);
            int sum = accumulate(f.begin(), f.end(), 0);
            curr -= sum;
        }

        if (isFound(curr)) break;

        out << curr << " ";
        last.push_back(curr);
    }

    return 0;
}
