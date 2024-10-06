#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int weight[n];
    for(int i=0; i<n; i++){
        cin>>weight[i];
    }
    int val[n];
    for(int j=0; j<n; j++){
        cin>>val[i];
    }
    int W; cin>>W;
    int dp[n+1][W+1];
    //ekhane 0r and 0c sobgule cell e 0 value assign hobe. Karon kuno item na thakle 0 kuno weight na thakle 0 hobe.
    for(int i=0; i<=n; i++){
        for(int j=0; j<=W; j++){
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    return 0;
}