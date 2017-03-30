#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{

    ll n, h, k,i;

    cin>>n>>h>>k;

    int a[n];

    for( i = 0; i < n; i++)
    {
        cin>>a[i];
    }


    ll tmp = 0, sum = 0;

    //tmp = a[0];

    for( i = 0; i < n;)
    {
        while(tmp + a[i] <= h )
        {
            tmp+= a[i];
            i++;
        }

         //cout<<tmp<<" ";
        if(tmp> k)tmp-= k;
        else tmp  = 0;
        sum++;
         //cout<<tmp<<" ";
    }

   //1
    //cout<<tmp<<" "<<endl;

    if(tmp == 0) cout<<sum<<endl;
    else cout<<sum+1<<endl;
    return 0;
}
