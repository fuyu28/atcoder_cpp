#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    vector<int> A(N),B(N);
    vector<vector<int>> C(N,vector<int>(2));
    for (int i = 0; i < N; i++) cin >> A.at(i) >> B.at(i);
    for (int i = 0; i < N; i++) {
        C.at(i).at(0) = B.at(i) - A.at(i);
        C.at(i).at(1) = i;
    }
    sort(C.begin(),C.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] < beta[0];});
    
    return 0;
}