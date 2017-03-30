#include <bits/stdc++.h>
using namespace std;
int i, tmp, sum;
int num[101], a[101];
int main()
{
   int i, t, n, k, m, j, tmp, cnt;

   cin>>t;
   for(i = 1; i <=t; i++)
   {
       cin>>n;

       for(j = 0; j< n; j++)
       {
           cin>>num[j];
           a[j] = num[j];
       }

       sort(a, a+n);
       cnt = 0;
       for(j = 0; j< n; j++)
       {
           if(a[j] != num[j]) cnt++;
       }
       if(cnt <= n/2)cout<<"Case "<<i<<": "<<ceil((double)cnt/2)<<endl;
       else cout<<"Case "<<i<<": "<<n-ceil((double)cnt/2)<<endl;

   }


    return 0;
}
