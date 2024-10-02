#include<bits/stdc++.h>
using namespace std;
int dp[5];
int knapsacRec(int sz,int val[],int weight[], int w){
     if(sz==0) return 0;
     if(w<=0) return 0;
     int take=knapsacRec(sz-1, val, weight, w-val[sz])+val[sz];
     int unTake=knapsacRec(sz-1, val, weight, w);
     return max(take, unTake);

}
int main(){
    int sz;
    cin>>sz;
    int val[sz+1];
    int weight[sz+1];
    for(int i=1; i<=sz; i++){
        cin>>val[i];
        cin>>weight[i];
    };
    int w;
    cin>>w;
    int ans=knapsacRec(sz, val, weight, w);
    cout<<ans<<endl;
    return 0;
}