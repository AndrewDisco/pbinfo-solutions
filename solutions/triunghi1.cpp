#include<bits/stdc++.h>
using namespace std;

double a, b, c;

bool isTriangle(double a, double b, double c) {
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    else
        return true;
}

string nuStiuCeFac(double a, double b, double c) {
    double max_val = max({a, b, c});
    double other1, other2;

    if(max_val == a) {
        other1 = b;
        other2 = c;
    } else if(max_val == b) {
        other1 = a;
        other2 = c;
    } else {
        other1 = a;
        other2 = b;
    }

    double check_val = other1*other1 + other2*other2 - max_val*max_val;

    if(check_val == 0)
        return "triunghi dreptunghic";
    else if(check_val > 0)
        return "triunghi ascutitunghic";
    else
        return "triunghi obtuzunghic";
}

int main() {
    cin >> a >> b >> c;

    if(isTriangle(a, b, c))
        cout << nuStiuCeFac(a, b, c) << endl;
    else
        cout << "nu este triunghi" << endl;

    return 0;
}
