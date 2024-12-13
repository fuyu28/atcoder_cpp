#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    for (int i = 0; i < S.size();) {
        int j = i;
        while (j < S.size() && S.at(j) == S.at(i)) {
            ++j;
        }

        cout << S.at(i) << " " << j - i << endl;
        i = j;
    }
    return 0;
}