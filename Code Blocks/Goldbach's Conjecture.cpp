#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

bool Isp(int n)
{
    int i,j;
    if(n==1)
        return 0;

    if(n==2)
        return 1;

    if(n%2==0)
        return 0;

    int l=sqrt(n);

    for(i=3; i<=l; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a,b,i,m,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        else if(n<6 && n>0)
        {
            printf("Goldbach's conjecture is wrong.\n");
            continue;
        }

        a=0,b=0;

        for(i=n-1; i>=n/2; i--)
        {
            if(Isp(i))
            {
                m=n-i;
                if(Isp(m))
                {
                    if(i%2==1 && m%2==1)
                    {
                        a=i;
                        b=m;
                        break;
                    }
                }
            }
        }

        if(a>0 && b>0 && a<=b)
            printf("%d = %d + %d\n",n,a,b);
        else if(a>0 && b>0 && b<a)
            printf("%d = %d + %d\n",n,b,a);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
