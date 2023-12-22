#include <bits/stdc++.h>

using namespace std;

ifstream in("timbre.in");
ofstream out("timbre.out");

unsigned short cer;
int n;

void solveOne(){
    in >> n;
    in.get();
    map<string, int> frq;

    for(int i=0; i<n; ++i){
        string line;
        getline(in, line);

        string name, countS;
        int count, ssiz = line.size();

        for(int j=ssiz-1; j>=0; --j){
            if(line[j] == ' '){
                reverse(countS.begin(), countS.end());
                name = line.substr(0, j);
                count = stoi(countS);
                break;
            }
            countS += line[j];
        }

        frq[name] += count;
    }

    int cnt = 0;

    for(auto it : frq){
        ++cnt;
    }

    out << cnt;
}

void solveTwo(){
    in >> n;
    in.get();
    map<string, int> frq;

    for(int i=0; i<n; ++i){
        string line;
        getline(in, line);

        ++frq[line];
    }

    int cnt = 0;
    for(auto it : frq){
        if(it.second == 1)
            ++cnt;
    }

    out << cnt;
}

void solveThree(){
    in >> n;
    in.get();
    map<string, set<int>> frq;

    for(int i=0; i<n; ++i){
        string line;
        getline(in, line);

        string countS, name;
        int count, ssiz = line.size();

        for(int j=ssiz-1; j>=0; --j){
            if(line[j] == ' '){
                reverse(countS.begin(), countS.end());
                name = line.substr(0, j);
                count = stoi(countS);
                break;
            }
            countS += line[j];
        }

        frq[name].insert(count);
    }

    long long maxS = LLONG_MIN;

    for(auto it : frq){
        long long sum = 0;
        for(auto it2 : it.second)
            sum += it2;

        maxS = max(maxS, sum);
    }

    for(auto it : frq){
        long long sum = 0;
        for(auto it2 : it.second)
            sum += it2;

        if(sum == maxS)
            out << it.first << "\n";
    }
}

int main() {
    in >> cer;

    switch(cer){
        case 1:
            solveOne();
            break;
        case 2:
            solveTwo();
            break;
        case 3:
            solveThree();
            break;
    }

    return 0;
}
