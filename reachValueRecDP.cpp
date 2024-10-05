#include<bits/stdc++.h>
using namespace std;
int inputValue;
bool isReachRec(int n){
    if(n==inputValue) return true;
    if(n>inputValue) return false;
    return isReachRec(n*10) || isReachRec(n*20);
}
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        cin>>inputValue;
        cout<<isReachRec(1)<<endl;
    }
    return 0;
}