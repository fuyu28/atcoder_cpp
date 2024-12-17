#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C,X;
    cin >> A >> B >> C >> X;
    int answer = 0;

    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            int amari = X - (i * 500 + j * 100);
            if (amari < 0) break;
            if (amari % 50 == 0 && amari / 50 <= C) {
                answer++;
            }
        }
    }
    cout << answer << endl;
    return 0;
}