#include<bits/stdc++.h>
using namespace std;
int dp[100][100]
bool subSetSum(int n, int a[], int s){
    if(n==0){
        if(s==0) return true;
        else return false;
    }
    if(dp[n][s]!=-1) return dp[n][s];
    //s theke zodi a er n index chuto/soman hoy tahole nite parbo
     if(a[n]<=s){
       bool op1=subSetSum(n-1, a, s-a[n]);
       bool op2=subSetSum(n-1, a, s);
       return dp[n][s]=op1||op2;
     }
     else {
        return dp[n][s]=subSetSum(n-1, a, s);
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
    memset(dp, -1, sizeof(dp));
    bool ans=subSetSum(n-1, a, s);
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}