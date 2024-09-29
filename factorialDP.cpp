#include<bits/stdc++.h>
using namespace std;
/*
Factorial e repatation recursive call hoy na. Tai ekhane optimized/memoize korar sujug thake na. Tai factorial DP na.
*/
int factorial(int n){
    if(n==2) return 2;
    int factVal=factorial(n-1);
    return factVal*n;
}
int main(){
    int ans=factorial(4);
    cout<<ans<<endl;
    return 0;
}