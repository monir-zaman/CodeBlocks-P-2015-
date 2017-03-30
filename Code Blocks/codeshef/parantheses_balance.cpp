#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, n, t, lft, rt;

    string str;

    cin>>t;
    getchar();

    while(t--)
    {

        lft = rt = 0;
        getline(cin,str);

        int sz = str.size();
        if(sz == 0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        // cout<<lft<<endl;

        for(i = 0; i < sz; i++)
        {
            if(str[i] == '(' || str[i] == '[') lft++;
            else if(str[i] == ')' || str[i] == ']') rt++;
        }
        j= 0;int g = 0;

        //cout<<sz<<endl;
        if(lft != rt || str[0] == ']' || str[0] == ')' || sz % 2 == 1)
        {
            cout<<"No"<<endl;
            continue;
        }

        else
        {
            //cout<<sz<<endl;
             stack<char>stk;
            for(i = 0; i < sz; i++)
            {
                if( str[i] == '[' || str[i] == '(' ) stk.push(str[i]);

                else if(str[i] == ')' )
                {
                    if(stk.size() != 0 && stk.top() == '(')  stk.pop();


                }


                else if(str[i] == ']')
                {
                    if(stk.size() != 0 && stk.top() == '[') stk.pop();

                }
                else j++;


            }

           // cout<<"sdkjghdslkjghsdkjhsdkghdlskjg"<<endl;
            if(stk.size() == 0 && j == 0) cout<<"Yes"<<endl;
            ///else if((stk.size() != 0 && j == 0)) cout<<"No"<<endl;
            else cout<<"No"<<endl;
        }


    }

    return 0;
}
