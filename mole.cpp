#include<bits/stdc++.h>
const int M=1000000007;
long long fastPower(long long base,long long power,long long M)
{
    if(power==0)
       return 1;
    if(power==1)
    return base;
    long long halfn=fastPower(base,power/2,M);
    if(power%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int main()
{
    long long t,n,a;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        a=fastPower(2,n,M);
        a=(a+1)%M;
        a=(a*2)%M;
        printf("%lld\n",a);
    }
    return 0;
}
