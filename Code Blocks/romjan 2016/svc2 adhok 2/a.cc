#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, n, t, tmp, zero, one;

    cin>>t;
    //getchar();
    string ch;
    for(i = 1; i <= t; i++)
    {
        cin>>ch;

        vector<int>v;

        //for(j= 0; j< )
        int sz = ch.size();
        for(j = 0; j < sz; j++)
        {
            v.push_back(ch[j] - '0');

            int u = v.size();
            if(u >= 3)
            {
                if(v[u-3] == 1 && v[u-2] == 0 && v[u-1] == 0)
                {
                    v.erase(v.begin()+u-1);
                    v.erase(v.begin()+u-2);
                    v.erase(v.begin()+u-3);
                    //v.erase(v.begin()+u-3);
                }
            }
            //cout<<"kkkkkkkkkkkkkkkkkk"<<endl;
        }
        printf("Case %d: ",i);
        if(v.size() == 0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;



    }

    return 0;
}
