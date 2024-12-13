#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, W;
    cin >> S >> W;
    string res = (S > W) ? "safe" : "unsafe" ;
    cout << res << endl;
    return 0;
}