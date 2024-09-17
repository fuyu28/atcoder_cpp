#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,K;
    vector<int> A(N);
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> A.at(i);

    bool Answer = false;
    for (int i = 0;i < (1 << N); i++) {
        int sum = 0;
        for (int j = 1; j <= N; j++) {
            int wari = (1 << (j - 1));
            if ((i / wari) % 2 == 1) sum += A.at(j);
        }
        if (sum == K) Answer = true;
    }

    if (Answer == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}