#include<bits/stdc++.h>
using namespace std;

int Solve (int N, vector <int> A) {
   int sub;
   int compare=INT_MAX;
   for(int i=0;i<N;i++){
       sub=abs(A[i]-0);
       if(sub<compare){
           compare=sub;
       }
       if(sub==compare && A[i]>0){
           compare=sub;
       }
   }
   return compare;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector <int> A(N);
    for (int a_i = 0; a_i < N; ++a_i) {
        cin >> A[a_i];
    }
    int out = Solve(N, A);
    cout << out << "\n";
}