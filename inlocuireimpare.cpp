#include <iostream>
#include <vector>

using namespace std;

int cifre_impare(int n) {
    if(n == 0)
        return 0;
    else {
        int last_digit = n % 10;
        if(last_digit % 2 == 1)
            return cifre_impare(n / 10) * 10 + last_digit;
        else
            return cifre_impare(n / 10);
    }
}

void inloc(vector<int>& arr, int n) {
    if(n == 0)
        return;
    else {
        arr[n-1] = cifre_impare(arr[n-1]);
        inloc(arr, n-1);
    }
}

void afisare(const vector<int>& arr, int n) {
    if(n == 0)
        return;
    else {
        afisare(arr, n-1);
        cout << arr[n-1] << " ";
    }
}

void citire(vector<int>& arr, int n) {
    if(n == 0)
        return;
    else {
        cin >> arr[n-1];
        citire(arr, n-1);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    citire(arr, n);
    inloc(arr, n);
    afisare(arr, n);

    return 0;
}
