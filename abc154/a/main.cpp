#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T, U;
    int A, B;
    cin >> S >> T >> A >> B >> U;
    int Aa, Ba;

    if (S == U) Aa = A - 1;
    else Aa = A; 

    if (T == U) Ba = B - 1;
    else Ba = B;

    cout << Aa << " " << Ba << endl;
    return 0;
}