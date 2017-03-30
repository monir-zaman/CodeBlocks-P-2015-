#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"50000 "<<"3500"<<endl;
    long long unsigned t, n;
    cin>>t;
int i = 01;
    while(t--)
    {
        cin>>n;n--;


        printf("Case %d: %llu %llu\n",i, 3*n*(n+1)+1, (n+1)*(n+1)*(n+1) );
i++;
    }

    return 0;
}
