#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define L 10001

int u[L],v[L],w[L];

bool cmp(int a,int b)
{
    if(w[a]!=w[b])return w[a]>w[b];
    return v[a]<v[b];
}
int main()
{
    int a,c,s,n,i,j,k,l,vs[L];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&w[i],&v[i]);
        u[i]=i;
    }
    sort(u,u+n,cmp);

//     for(i=0;i<n;i++)
//    {
//        cout<<w[i]<<v[i];
//    }

    memset(vs,0,sizeof vs);

    s=0;

    for(i=0;i<n;i++)
    {

        c=0;
        for(j=v[u[i]];j>0;j--)
        {
            if(!vs[j])
            {
                vs[j]=1;
                c=1;
                break;
            }
        }
        if(c==1){
        s+=w[u[i]];
        }

    }
     printf("%d\n",s);
}
