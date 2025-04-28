#include <bits/stdc++.h> 
int fibonacciNumber(int n){
    // Write your code here.
    if (n<=2)return 1;
    long long mod = 1e9+7;
    long long  prev1 = 1;
    long long prev2 = 1;
    long long curr = 2;
    for (long long i=4 ;i<=n;i++)
    {
        prev1 = prev2;
        prev2 = curr;
        curr = (prev1 + prev2)%mod;
    }
    return curr;
}