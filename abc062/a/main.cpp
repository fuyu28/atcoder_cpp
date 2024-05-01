#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    int X = 0;
    int Y = 0;
    int T = 0;
    vector<int> A = {1,3,5,7,8,10,12},B = {4,6,9,11},C = {2};
    for (int i=0;i<A.size();i++) {
        if (A.at(i) == x) X = 1;
        if (A.at(i) == y) Y = 1;
    }
    for (int i=0;i<B.size();i++) {
        if (B.at(i) == x) X = 2;
        if (B.at(i) == y) Y = 2;
    }
    for (int i=0;i<C.size();i++) {
        if (C.at(i) == x) X = 3;
        if (C.at(i) == y) Y = 3;
    }
    for (int i=0;i<3;i++) {
        if (X == i && Y == i) {
            cout << "Yes" << endl;
            T = 1;
        }
    }
    if (T == 0) cout << "No" << endl;
    return 0;
}