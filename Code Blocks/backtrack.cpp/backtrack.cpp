#include<bits/stdc++.h>
using namespace std;
int n,k,cnt;
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
vector<char>v;
bool taken[35];
void _back()
{
    if(cnt>=k) return;
    if(v.size()==n)
    {
        cnt++;
        for(int i=0; i<n; i++) printf("%c",v[i]);
        printf("\n");
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            v.push_back(s[i]);
            _back();
            taken[i]=0;
            v.pop_back();
        }
    }
}

int main()
{
    int t,ca=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        cnt=0;
        v.clear();
        memset(taken,0,sizeof taken);
        printf("Case %d:\n",ca++);
        _back();
    }
}