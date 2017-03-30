#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d, tmp;
    int t, n;
    cin>>t;

    while(t--)
    {
        set<double>s;
        cin>>a>>b;
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>c>>d;

            tmp = ((a-c) *  (a-c) ) + ((b-d) *  (b-d) );

            tmp  = sqrt(tmp);

            s.insert(tmp);



        }

        cout<<s.size()<<endl;
    }

    return 0;
}
