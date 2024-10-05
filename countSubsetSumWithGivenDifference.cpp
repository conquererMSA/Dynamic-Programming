#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    int dif;
    cin>>dif;
    if((dif+sum)/2%2==0){
       int s=(dif+sum)/2;
       int dp[n+1][s+1];
       dp[0][0]=1;
       for(int i=1; i<=s; i++) dp[0][i]=0;
       for(int i=1; i<=n; i++){
          for(int j=0; j<=s; j++){
              if(a[i-1]<=j){
                dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
              }
              else dp[i][j]=dp[i-1][j];
          }
       }
       //2D Grid dp[n][s] nirdesh kore koyti/kotovabe subset create kora zabe zekhane difference hobe diff
       cout<<dp[n][s]<<endl;
    }
    else cout<<0<<endl;
    
    // for(int i=0; i<=n; i++){
    //     for(int j=0; j<=s; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}