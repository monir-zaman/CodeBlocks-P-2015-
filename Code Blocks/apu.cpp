#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,t,sum;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>n;
       sum = (sqrt(1+8*n)-1)/2;
       cout<<sum<<endl;
   }
    return 0;
}
