#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum=0,n,m,arr[15];
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&m);
        sum=sum+m;
    }
    printf("%lld\n",sum);
}
