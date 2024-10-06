#include<bits/stdc++.h>
using namespace std;
int r,c;
int dp[20][20];
long long int totalEarnRecursion(int n, int m){
    if(n>=r || m>=c) return 0;
    long long int pick=totalEarnRecursion(n+1, m);
    long long int noPick=totalEarnRecursion(n, m+1);
    return dp[n][m]+max(pick, noPick);

}
int main(){
    cin>>r>>c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>dp[i][j];
        }
    }
    cout<<totalEarnRecursion(0,0)<<endl;
    return 0;
}