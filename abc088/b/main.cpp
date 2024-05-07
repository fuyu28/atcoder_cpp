#include <bits/stdc++.h>
using namespace std;

int main() {
    int  N;
    cin >> N;
    vector<int> A(N);
    int Asum = 0;
    int Bsum = 0;

    for (int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    sort(A.begin(), A.end(), greater<int>());

    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) Asum += A.at(i);
        else Bsum += A.at(i);
    }

    cout << Asum - Bsum << endl;
    return 0;
}