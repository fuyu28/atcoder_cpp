#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string AB, AC, BC;
    cin >> AB >> AC >> BC;

    if (AB == "<") {
        if (BC == "<") cout << "B" << endl;
        else {
            if (AC == "<") cout << "C" << endl;
            else cout << "A" << endl;
        }
    }
    else {
        if (AC == "<") cout << "A" << endl;
        else {
            if (BC == "<") cout << "C" << endl;
            else cout << "B" << endl;
        }
    }
    return 0;
}