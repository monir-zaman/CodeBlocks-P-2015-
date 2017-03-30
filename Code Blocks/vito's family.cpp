#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, l, m, n, k, t, sum1, sum2;

    cin>>t;

    while(t--)
    {
        sum1 = 0;
        sum2 = 0;
        cin>>n;

        int add[n];

        for(i = 0; i < n; i++)
        {
            cin>>add[i];
        }

        sort(add, add+n);
        if(n % 2 == 0)
        {
            for( i = 0; i < n/2; i++)
            {
                sum1+=add[i];
            }

            for( i = n/2; i < n; i++)
            {
                sum2+=add[i];
            }
        }

        else
        {
            for( i = 0; i < n/2; i++)
            {
                sum1+=add[i];
            }

            for( i = n/2+1; i < n; i++)
            {
                sum2+=add[i];
            }
        }

        m = abs(sum1-sum2);

        cout<<m<<endl;
    }

    return 0;
}
