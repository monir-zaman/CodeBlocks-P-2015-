
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,i,j,k,n;
    char ch[100000];

    map <string,ll> ma;

    scanf("%lld",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(ch);
        ma[ch]++;
        if(ma[ch]==1)printf("OK\n");
        else
        {
            printf("%s",ch);
            cout << ma[ch]-1<<endl;
        }

    }


}
