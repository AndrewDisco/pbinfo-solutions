#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num){
    if(num < 2) {
        return false;
    }
    else if(num == 2) {
        return true;
    }
    else if(num % 2 == 0) {
        return false;
    }
    else {
        for(int i = 3; i*i <= num; i += 2) {
            if(num % i == 0) {
                return false;
            }
        }
        return true;
    }
}

vector<int> sir;
int n;

int main() {
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        sir.push_back(x);
    }

    for(int i=sir.size()-1; i>=0; --i) {
        if(isPrime(sir[i])) {
            cout << sir[i] << " ";
        }
    }

    return 0;
}
