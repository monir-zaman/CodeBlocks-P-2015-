#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[100000],n,i,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%lld\n",sum);
}
