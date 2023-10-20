#include <bits/stdc++.h>

using namespace std;

long long CountSumS(vector<int> &a, int s) {
    //unordered map - frequency
    unordered_map<int, int> freq;
    long long count = 0;

    //iterate
    for (int num : a) {
        //find complement
        int complement = s - num;

        //is it in map?
        if (freq.find(complement) != freq.end()) {
            count += freq[complement];
        }

        freq[num]++;
    }

    return count;
}