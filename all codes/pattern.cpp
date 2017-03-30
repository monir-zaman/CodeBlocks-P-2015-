#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, t, n,m;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;

        n = a*(c+1);
        m = b*(c+1);

        for(int i = 0; i < n+1; i++)
        {
            for(int j = 0; j < m+1; j++)
            {
                if(i == 0 || i == n || j == 0|| j == m || i % (c+1) == 0 || j % (c+1) == 0) cout<<"*";
                else if( n+1 % (b+c) == 1) cout<<"\\";

                else cout<<".";
            }
            cout<<endl;
        }

        cout<<endl;
    }

    return 0;
}
