#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int fiboArr[n];
    fiboArr[0]=0;
    fiboArr[1]=1;
    for(int i=2; i<n; i++){
        fiboArr[i]=fiboArr[i-1]+fiboArr[i-2];
    }
    cout<<"fibo result "<<fiboArr[n]<<endl;

    return 0;
}