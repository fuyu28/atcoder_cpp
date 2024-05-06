#include <bits/stdc++.h>
using namespace std;

int main() {
   int A[20],B[20];
   int Asum,Bsum = 0;
   
   for (int i=0;i<9;i++) {
     cin >> A[i];
     Asum += A[i];
   }
   
   for (int i=0;i<8;i++) {
     cin >> B[i];
     Bsum += B[i];
   }
   
   cout << Asum - Bsum +1 << endl;
   return 0;
}