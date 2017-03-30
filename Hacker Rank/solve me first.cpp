#include<bits/stdc++.h>
using namespace std;
long long sum(long long a,long long b)
{
    long long sum;
    sum=a+b;
    return sum;
}
int main()
{
    long long a,b;
    scanf("%lld",&a);
    scanf("%lld",&b);
    printf("%lld\n",sum(a,b));
}
