#include<bits/stdc++.h>
using namespace std;

int main(){
    int sz;
    cin>>sz;
    int val[sz];
    int weight[sz];
    for(int i=0; i<sz; i++){
           cin>>val[i];
    };
    for(int i=0; i<sz; i++){
           cin>>weight[i];
    };
    int W;
    cin>>W;
    int dp[sz+1][W+1];
    for(int i=0; i<=sz; i++){
        for(int j=0; j<=W; i++){
            if(i==0 || j==0) dp[i][j]=0;
        }
    };
    for(int i=1; i<=sz; i++){
        for(int j=1; j<=W; i++){
            if(weight[i-1]<=j){
                int op1=dp[i-1][j-weight[i-1]]+val[i-1];
                int op2=dp[i-1][j];
                dp[i][j]=max(op1, op2);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for(int i=1; i<=sz; i++){
        for(int j=1; j<=W; i++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}