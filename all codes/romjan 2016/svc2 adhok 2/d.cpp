#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
typedef long long ll;
typedef pair<int,int>  PII;

bool cmp(PII a, PII b)
{
    if(a.second == b.second) return a.first<b.first;

    else return a.second <b.second;
}
int main()
{
    int t, i, j, k, n, tmp, ttl, cnt, lst;

    cin>>t;
    PII p[100005];

    while(t--)
    {
        cin>>n;

        //int a[n];
       // pair<int, int>p[100005];

        for(i = 0; i < n; i++)
        {
            cin>>p[i].first>>p[i].second;


        }
        sort(p, p+n, cmp);
        ttl = cnt = 1;

        lst = p[0].second;

        for(i =1; i < n; i++)
        {
            if(p[i].first >= lst)
            {
                cnt++;

                lst = p[i].second;
            }
        }

        cout<<cnt<<endl;





    }

    return 0;
}










// MDPM-X4RM-KN7E-DAKP-NFTT
