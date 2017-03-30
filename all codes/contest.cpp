#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, l, n, t;
    set<char>vb;
    set<char> :: iterator it;
    string st;
    cin>>t;

    getchar();
    while(t--)
    {
        getline(cin,st);
         map<char, int>rpt;
        int n = st.size();
        int total = 0, t1;
        //total = 0;
        for( i = 0; i < n; i++)
        {
            ///total = 0;
            if( !( st[i] <=90 && st[i] >=65) && !( st[i] <=122 && st[i] >=97) ) continue;
            if(( st[i] <=90 && st[i] >=65) ) st[i]+=32;
            rpt[st[i]]++;
            if(rpt[st[i]] > total )
            {
                total = rpt[st[i]];

                 //cout<<total<<endl;
            }

        }
        //cout<<total<<endl;
        for( i = 0; i < n; i++)
        {
            if(st[i] == 32) continue;

            if(rpt[st[i]] == total )
            {
                vb.insert(st[i]);


            }



        }


     for(it = vb.begin(); it != vb.end() ; it++)
       {
            //if(it == s.end())cout << *it<<endl;


            cout << *it;
        }

        cout<<endl;


        vb.clear();
       //st.clear();

        //cout<<endl;


    }

    return 0;
}
