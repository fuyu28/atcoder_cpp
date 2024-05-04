#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,X,Y,Z;
    cin >> N >> X >> Y >> Z;
    bool answer = false;

    if (X > Y) {
        for (int i=Y;i<=X;i++) {
            if(Z == i) answer = true;
        }
    }
    else if (X < Y) {
        for (int i=X;i<=Y;i++) {
            if (Z == i) answer = true;
        }
    }

    if (answer == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}