#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==42)
            break;
        else
            printf("%d\n",n);
    }
}
