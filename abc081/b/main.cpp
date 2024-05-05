#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    
    int res = 0;

    while (true) {
        bool exist_odd = false;
        for (int i = 0; i < N; i++) {
            if (A.at(i) % 2 != 0) exist_odd = true;
        }

        if (exist_odd) break;

        for (int i = 0; i < N; i++) {
            A.at(i) /= 2;
        }
        res++;
    }

    cout << res << endl;
    return 0;
}