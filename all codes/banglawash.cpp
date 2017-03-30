#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, n, t, i, j, l, bwin, wwin, tie, aban;
    string a;
    cin>>t;

    for(i = 1; i <=t; i++)
    {
        cin>>n;

        cin>>a;

        bwin = 0, wwin = 0, tie = 0, aban = 0;

        for(j = 0; j < n; j++)
        {
            if(a[j] == 'B') bwin++;
            else if(a[j] == 'W') wwin++;
            else if(a[j] == 'T') tie++;
            else if(a[j] == 'A') aban++;
            //else if(a[i] == 'B') bwin++;
        }
        if(aban == n) printf("Case %d: ABANDONED\n", i);
        else if(bwin == n) printf("Case %d: BANGLAWASH\n", i);
        else if(wwin == n) printf("Case %d: WHITEWASH\n", i);
        else if(wwin == bwin) printf("Case %d: DRAW %d %d\n", i, bwin, bwin);
        else if(wwin > bwin) printf("Case %d: WWW %d %d\n", i,wwin, bwin);
        else if(wwin < bwin) printf("Case %d: WWW %d %d\n", i,bwin ,wwin);


    }

    return 0;
}
