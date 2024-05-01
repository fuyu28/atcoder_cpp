#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int n = 0;
    for (int i=0;i<S.size();i++) {
        if (S.at(i) == '+') n++;
        else n--;
    }
    cout << n << endl;
    return 0;
}