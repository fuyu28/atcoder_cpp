#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    bool Twin = false;
    bool Awin = false;
    while (1) {
        C -= B;
        if (C <= 0) {
            Twin = true;
            break;
        }
        A -= D;
        if (A <= 0) {
            Awin = true;
            break;
        }
    }

    if (Twin) cout << "Yes" << endl;
    if (Awin) cout << "No" << endl;
    return 0;
}