#include<bits/stdc++.h>

using namespace std;

void afisvec(int arr[], int size) {
    cout << arr[size-1] << " ";
    if (size > 1)
        afisvec(arr, size-1);
}
