#include<bits/stdc++.h>
using namespace std;
bool subSetSum(int n, int a[], int s){
    //s theke zodi a er n index chuto/soman hoy tahole nite parbo
     if(a[n]<=s){
       bool op1=subSetSum(n-1, a, s-a[n]);
       bool op2=subSetSum(n-1, a, s);
       return op1||op2;
     }
     else {
        return subSetSum(n-1, a, s);
     }
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int s;
    cin>>s;
    bool ans=subSetSum(n-1, a, s);
    return 0;
}