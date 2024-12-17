#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0;i<N;i++) cin >> A.at(i);
    bool answer = false;
    for (int i : A) {
        for (int j : A) {
            for (int k : A) {
                if (i + j + k == 1000 && i != j && j != k && i != k) {
                    answer = true;
                    break;
                }
            }
            if (answer) break;
        }
        if (answer) break;
    }
    if (answer == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}