#include<bits/stdc++.h>
using namespace std;
int climbingTreeRec(int n, int arr[], int sz){
    if(n>=sz) return 0;
    int step1=climbingTreeRec(n+1, arr,sz);
    int step2=climbingTreeRec(n+2, arr, sz);
    return arr[n]+min(step1, step2);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int zeroIndex=climbingTreeRec(0,arr, n);
    int oneIndex=climbingTreeRec(1,arr,n);
    cout<<min(zeroIndex, oneIndex)<<endl;
    return 0;
}