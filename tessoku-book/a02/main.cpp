#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    bool answer = false;
    for (int i=0;i<N;i++) {
        cin >> A.at(i);
        if (A.at(i) == X) {
            cout << "Yes" << endl;
            answer = true;
            break;
        }
    }
    if (answer == false) cout << "No" << endl;
    return 0;
}