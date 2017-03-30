#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long p, e, t;

    int t1;

    cin>>t1;

    while(t1--)
    {
        cin>>p>>e>>t;

        if(p == 0 || e == 0 || t == 0)
        {
            cout<< "Impossible"<<endl;
            continue;
        }

        //if(p == 0 && e == 0 && t == 0) continue;

        int temp = e/p;

        if(e<p) temp=1;

        else if(e%p == 0 )
        {
            //cout<<temp*t<<" Seconds"<<endl;

            temp = e/p;
        }
        else
        {
            //cout<<((temp+1)*t)<<" Seconds"<<endl;
            temp =  (e/p)+1;

        }
    int n = temp*t;
        if(n== 1)cout<<n<<" Second"<<endl;

        else cout<<n<<" Seconds"<<endl;


    }

    return 0;
}
