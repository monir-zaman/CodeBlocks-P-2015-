#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define ss 1000000000.4
int main()
{
    ll i,j,k,l,x,y,z,n,m,t;
    double a,b,c,d,s;



    cin>>t;
    while(t--)
    {
        map<double,ll>mp;
        map<double,ll>::iterator it;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>a>>b>>c;

            if(b!=0)d=-(a/b);
            else d=ss;
            mp[d]++;
        }
        y=1;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            x=it->second;
            y=(((y)%mod)*(x))%mod;
        }
        cout<<y<<endl;
    }
    return 0;
}
