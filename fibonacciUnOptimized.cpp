#include<bits/stdc++.h>
using namespace std;
/*
un optimized fibonacci series er complexity hoy 2^N za 1 sec e N=20 ti value handle korte pare. un optimized fibonacci series e onek gulu repeated/duplicate recursive call hoy zake sub-problem bole. Ai sub problem guluke Memoize korle complexity linear hoye zay. Ekhane DP apply kora zete pare.
*/
int fibonacci(int n){
    if(n<2) return n;
    int fiboVal=fibonacci(n-1)+fibonacci(n-2);
    return fiboVal;
}
int main(){
    int ans=fibonacci(10);
    cout<<ans<<endl;
    return 0;
}