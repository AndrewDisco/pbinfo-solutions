#include<bits/stdc++.h>

using namespace std;

int suma(int arr[], int size) {
    if (size == 0)
        return 0;

    return arr[size - 1] + suma(arr, size - 1);
}