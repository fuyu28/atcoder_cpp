#include <bits/stdc++.h>
using namespace std;

int Getdigit(int num) {
    int digit = 0;
    while (num != 0) {
        num /= 10;
        digit++;
    }
    return digit;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int answer = 0;
    for (int i = 0; i < N; i++) {
        
        for (int j = 0; j < Getdigit(i); j++) {

        }
    }
    return 0;
}