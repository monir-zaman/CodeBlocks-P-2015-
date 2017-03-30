#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,  r = 9999999,m;
    int x, y, d;
    while(cin>>n)
    {
        int num[10001],r = 9999999;
        for(int i = 0; i < n; i++ ) cin>>num[i];
        cin>>m;
        getchar();
        sort(num, num+n);
        for(int i= 0; i < n-1; i++)
        {
            for(int j = i+1; j< n; j++)
            {
                if(num[i]+num[j] == m)
                {
                    //cout<<num[i]<<" "<<num[j]<<endl;
                    d = abs(num[i]-num[j]);cout<<d<<" "<<r<<endl;
                    if(d<r )
                    {
                        x = num[i];
                        y = num[j];
                        r = d; //cout<<x<<" "<<y<<endl;
                    }
                }


            }
        }
        cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<endl<<endl;

    }


    return 0;
}
