#include<bits/stdc++.h>
using namespace std;
const int N=(1e5)+5;
long long int storeValue[N];
long long int fibonacci(int n){
    if(n==1 || n==0) return n;
    if(storeValue[n]!=-1) return storeValue[n];
    long long int fibo=fibonacci(n-1)+fibonacci(n-2);
    storeValue[n]=fibo;
    return fibo;
}
int main(){
    int sz;
    cin>>sz;
   memset(storeValue, -1, sizeof(storeValue));
   int fiboAns=fibonacci(sz);
   cout<<fiboAns<<endl;
    return 0;
}