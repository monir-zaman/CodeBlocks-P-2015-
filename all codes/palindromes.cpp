#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, t, n, temp, s,m;

    string p;
    while(getline(cin, p) && p != "DONE")
    {
        //;

        vector<char>ch;

        for(int i = 0; i <p.size(); i++)
        {
            if((p[i] <= 122 && p[i] >= 97))
            {
                ch.push_back(p[i]);
            }

            else if((p[i] <= 90 && p[i] >= 65))
            {
                p[i]+=32;

                ch.push_back(p[i]);
            }


        }



        s = ch.size();
        m  =s;
        s= s/2;
        temp = 0;

        for(int i = 0; i < s; i++)
        {
            if(ch[i] != ch[m-i-1])
            {
                temp = 1;
                break;
            }


        }

        if(temp == 0) cout<<"You won't be eaten!"<<endl;

        else cout<<"Uh oh.."<<endl;
    }
    return 0;
}
