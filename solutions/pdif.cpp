#include <bits/stdc++.h>

using namespace std;

ifstream fin("pdif.in");
ofstream fout("pdif.out");

int cifNum(int num){
    if (num == 0)
        return 0;
    return (num % 10 + cifNum(num / 10));
}

int n;
short cer;

vector<int> sir;

pair<int, int> countMaxParitySequences(const std::vector<int>& arr) {
    int currentSeq = 1; // Set to 1 because all sequences are at least 1
    int maxSeq = 1; // Initialize the maximum sequence length to 1
    int cnt = 0; // Initialize the count of sequences to 0

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] % 2 != arr[i - 1] % 2) { // Check if adjacent numbers have different parities
            currentSeq++;
        } else {
            if (currentSeq > maxSeq) { // Update the maximum sequence length if necessary
                maxSeq = currentSeq;
                cnt = 1; // Reset the count of sequences
            } else if (currentSeq == maxSeq) { // Increment the count of sequences if it matches the maximum sequence length
                cnt++;
            }
            currentSeq = 1; // Reset the current sequence length
        }
    }

    if (currentSeq > maxSeq) { // Check if the last index of the array was part of the longest sequence
        maxSeq = currentSeq;
        cnt = 1; // Reset the count of sequences
    } else if (currentSeq == maxSeq) { // Increment the count of sequences if it matches the maximum sequence length
        cnt++;
    }

    return {maxSeq, cnt};
}

pair<int, int> findSeqConstraints(const std::vector<int>& arr) {
    int currentSeq = 1; // Set to 1 because all sequences are at least 1
    int maxSeq = 1; // Initialize the maximum sequence length to 1
    int cnt = 0; // Initialize the count of sequences to 0
    int maxSeqStart = 0; // Initialize the start index of the maximum sequence to 0
    int maxSeqEnd = 0; // Initialize the end index of the maximum sequence to 0

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] % 2 != arr[i - 1] % 2) { // Check if adjacent numbers have different parities
            currentSeq++;
        } else {
            if (currentSeq > maxSeq) { // Update the maximum sequence length if necessary
                maxSeq = currentSeq;
                maxSeqStart = i - currentSeq; // Update the start index of the maximum sequence
                maxSeqEnd = i - 1; // Update the end index of the maximum sequence
                cnt = 1; // Reset the count of sequences
            } else if (currentSeq == maxSeq) { // Increment the count of sequences if it matches the maximum sequence length
                cnt++;
            }
            currentSeq = 1; // Reset the current sequence length
        }
    }

    if (currentSeq > maxSeq) { // Check if the last index of the array was part of the longest sequence
        maxSeq = currentSeq;
        maxSeqStart = arr.size() - currentSeq; // Update the start index of the maximum sequence
        maxSeqEnd = arr.size() - 1; // Update the end index of the maximum sequence
        cnt = 1; // Reset the count of sequences
    } else if (currentSeq == maxSeq) { // Increment the count of sequences if it matches the maximum sequence length
        cnt++;
    }

    return {maxSeqStart, maxSeqEnd};
}


int main()
{
    fin >> n >> cer;

    for(int i=0; i<n; ++i){
        int x;
        fin >> x;

        sir.push_back(x);
    }

    for(int i=0; i<n; ++i){
        while(sir[i]>=10)
            sir[i] = cifNum(sir[i]);
    }

    if(cer == 1){
        pair<int, int> raspuns = countMaxParitySequences(sir);
        fout << raspuns.first << " " << raspuns.second;
    }
    else{
        pair<int, int> raspuns = findSeqConstraints(sir);
        fout << raspuns.first+1 << " " << raspuns.second+1;
    }

    return 0;
}
