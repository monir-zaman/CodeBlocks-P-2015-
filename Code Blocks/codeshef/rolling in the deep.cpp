#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, j, t;
    string a;

    vector<char>vb;

    stack<char>ch;
    while(getline(cin,a))
    {
        int n = a.size(), sz = 0;

        for(i = 0; i < n; i++)
        {
            if(a[i] == '(') ch.push('(');

            if(ch.size()>sz) sz = ch.size();

            if(a[i] == ')') ch.pop();
        }

        //cout<<sz<<endl;

        for(i = 0; i < n; i++)
        {
            if(a[i] == '(') ch.push('(');

            if(sz == ch.size() )
            {
                for(j= i+1; j < n; j++)
                {
                    if(a[j] == ')')
                    {
                        sz = -1;
                        break;


                    }
                    vb.push_back(a[j]);
                }

                if(sz == -1) break;
            }
        }

        for(i = 0; i< vb.size(); i++)
        {
            cout<<vb[i];
        }
        cout<<endl;

        vb.clear();


    }

    return 0;
}
