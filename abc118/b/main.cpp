#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K, A;
    cin >> N >> M;
    vector<int> exist(M + 1, 0);
    int cnt = 0;

    for (int i = 0; i < N; ++i) {
        cin >> K;
        for (int j = 1; j <= K; ++j) {
            cin >> A;
            exist.at(A)++;
        }
    }

    for (int i = 1; i <= M; ++i) {
        if (exist.at(i) == N) cnt++;
    }

    cout << cnt << endl;

    return 0;
}