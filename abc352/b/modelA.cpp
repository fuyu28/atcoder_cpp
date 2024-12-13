#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;

    int si = 0;
    for (int i = 0; i < t.size(); i++) {
        if (s.at(si) == t.at(i)) {
            cout << i + 1 << " ";
            si++;
        }
    }
    cout << endl;
    return 0;
}