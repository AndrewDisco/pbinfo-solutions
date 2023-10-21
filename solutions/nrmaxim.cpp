#include <bits/stdc++.h>
using namespace std;

int permutatie(int num) {
    string numStr = to_string(num);
    int n = numStr.length();

    for (int i = 0; i < n; i++) {
        if (numStr[i] == '0') continue;
        string rotated = numStr.substr(i) + numStr.substr(0, i);
        int rotatedNum = stoi(rotated);

        if (rotatedNum > num) {
            return rotatedNum;
        }
    }

    return num;
}

int nrmaxim(int num) {
    int maxNum = num;
    int numCopy = num;
    int nrCifre = 0;
    
    while (numCopy) {
        nrCifre++;
        numCopy /= 10;
    }

    for (int i = 0; i < nrCifre; i++) {
        num = permutatie(num);
        if (num > maxNum) {
            maxNum = num;
        }
    }

    return maxNum;
}