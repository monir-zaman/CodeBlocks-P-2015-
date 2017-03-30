#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ch,i,j,k,arr[100],x;
    scanf("%d",&n);
    x=n+1;
    while(1)
    {
        j=0;
        m=x;
        while(m!=0)
        {
            arr[j++]=m%10;
            m=m/10;
        }
        ch=0;
        for(i=0; i<j; i++)
        {
            for(k=i+1; k<j; k++)
            {
                if(arr[i]==arr[k])
                {
                    ch=1;
                    break;
                }
            }
            if(ch==1)
            {
                break;
            }
        }
        if(ch==1)
            x++;
        else if(ch==0)
        {
            printf("%d\n",x);
            break;
        }
    }
}
