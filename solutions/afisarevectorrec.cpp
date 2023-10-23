#include<bits/stdc++.h>

using namespace std;

void afisvec(int arr[], int size) {
    if(!size)
        return;

    cout << arr[0] << " ";

    afisvec(arr+1, size-1);
}