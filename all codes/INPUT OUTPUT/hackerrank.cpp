#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n, t;
    string a;

    map<char, int>m;

    vector<char>vb;

    while(cin>>a)
    {
        n=a.size()-1;

        for(i = 0; i < n; i++)
        {
            if(a[i] == a[i+1]) continue;

            else
            {
                vb.push_back(a[i]);
            }
        }
        n = vb.size();
        //if(n!= 0)
        //{
            for(i = 0; i < n-1; i++)
            {
                cout<<vb[i]<<endl;
                if(vb[i] == vb[i+1]) continue;

                else
                {
                    //vb.push_back(a[i]);
                    //cout<<vb[i]<<vb[i+1];
                }
            }
            cout<<endl;

        }

       // else cout<<"Empty String"<<endl;


        vb.clear();

    //}

    return 0;
}
