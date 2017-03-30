#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll  i, n , k, m, j, tmp;

    ll t;
    int tm;
    cin>>t;

    while(t--)
    {
        tm = 0;
        cin>>n>>k>>m;
        while(n <= m/ k)
        {
            n = n*k;
            ++tm;
        }
        cout<<tm<<endl;
    }

    return 0;
}
