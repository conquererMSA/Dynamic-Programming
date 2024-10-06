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
        cin>>val[j];
    }
    int W; cin>>W;
    int dp[n+1][W+1];
    //ekhane 0r and 0c sobgule cell e 0 value assign hobe. Karon kuno item na thakle 0 kuno weight na thakle 0 hobe.
    for(int i=0; i<=n; i++){
        for(int j=0; j<=W; j++){
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    // 0r and 0c purno thakbe, 1r and 1c theke shuru korte hobe.

    for(int i=1; i<=n; i++){
        for(int j=1; j<=W; j++){
            if(weight[i-1]<=j){
                int pick=dp[i-1][j-weight[i-1]]+val[i-1];
                int noPick=dp[i-1][j];
                dp[i][j]=max(pick, noPick);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    //ekhan theke pawya zabe puru 2D Grid, zar  n r nirdesh korbe protom n songkhok r use kore and n col weght use kore sorbucco koto value pawya zabe, kinru final answer hobe dp[n][W] cell;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=W; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[n][W]<<endl;
    return 0;
}