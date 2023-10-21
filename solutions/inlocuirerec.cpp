#include <iostream>
#include <vector>

using namespace std;

int numar_cifre(int n) {
    if(n < 10)
        return 1;
    else
        return 1 + numar_cifre(n / 10);
}

int prima_cifra(int n) {
    if(n < 10)
        return n;
    else
        return prima_cifra(n / 10);
}

void inloc(vector<int>& v, int i) {
    if(i == v.size())
        return;

    v[i] = numar_cifre(v[i]) * prima_cifra(v[i]);
    inloc(v, i + 1);
}

void citire(vector<int>& v, int n) {
    if(n == 0)
        return;

    int x;
    cin >> x;
    v.push_back(x);
    citire(v, n - 1);
}

void afisare(const vector<int>& v, int i) {
    if(i == v.size())
        return;

    cout << v[i] << ' ';
    afisare(v, i + 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    citire(v, n);
    inloc(v, 0);
    afisare(v, 0);
}
