#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool res = false;
    if (S.at(3) - '0' <= 2) res = true;
    if (S.at(3) - '0' == 3 && S.at(4) - '0' <= 4) res = true;
    if (S.at(3) - '0' == 3 && S.at(4) - '0' == 1 && S.at(5) - '0' == 6) res = false;
    if (S.at(3) - '0' == 0 && S.at(4) - '0' == 0 && S.at(5) - '0' == 0) res = false;
    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}