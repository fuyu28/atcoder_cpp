#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,X,Y,Z;
    cin >> N >> X >> Y >> Z;
    bool answer = false;

    if (X >= Z && Z >= Y) {
        answer = true;
    }
    else if (X <= Z  && Z <= Y) {
        answer = true;
    }

    if (answer == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}