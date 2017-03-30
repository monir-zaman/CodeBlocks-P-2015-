#include <bits/stdc++.h>
using namespace std;
long long sum;
long long product(long long a)
{
    long long  l=1;
    for(int i=9; i>=2; i--)
    {
        while(a%i==0)
        {
            //  printf("%lld %d\n",a,i);
            a=a/i;

            sum=sum+i*l;
            l=l*10;
        }
        if(a==1)break;
    }


    return a;
}
int main()
{
    long long a,b,c,d,e,f;
    scanf("%lld",&f);
    while(f--)
    {
        scanf("%lld",&a);
        if(a==0)printf("10\n");
        else if(a==1)printf("1\n");
        else
        {
            sum=0;
            b=product(a);
            if(b==1)printf("%lld\n",sum);
            else printf("-1\n");
        }
    }
    return 0;
}
