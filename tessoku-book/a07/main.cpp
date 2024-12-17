#include <bits/stdc++.h>
using namespace std;

int main() {
    int D, N;
    vector<int> L(100009),R(100009);
    vector<int> A(100009),ans(100009);
    cin >> D >> N;
    for (int i = 1; i <= N; ++i) cin >> L.at(i) >> R.at(i);

    ans.at(0) = 0;
    for (int i = 1; i <= N; ++i) {
        A.at(L.at(i))++;
        A.at(R.at(i) + 1)--;
    }
    
    for (int i = 1; i <= D; ++i) {
        ans.at(i) = ans.at(i - 1) + A.at(i);
        cout << ans.at(i) << endl;
    }
    return 0;
}