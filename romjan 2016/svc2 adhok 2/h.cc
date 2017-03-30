#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;
int tmp;

bool cmp(PII a, PII b)
{

}

PII num[100000];
int main()
{
    int i, j, k, n, t, dist, fuel, x, y, z;
char ch;
        cin>>t;
//    string s;



    while(t--)
    {
        deque<char>dq;
        cin>>n>>k;

        for(i = 0; i<n; i++)
        {
            cin>>ch;
            dq.push_back(ch);
        }
        while(dq.size()!= k )
        {


            j= 1;

            if(j % 2 == 1)
            {if(dq[i] =)
                for(i = 0; i < dq.size(); i++)
                {
                    if(dq[i] == '1')

                    {
                        dq.erase(dq.begin()+i);
                        break;
                    }


                }
            }

            else
            {
                for(i = dq.size() - 1; i >= 0; i--)
                {
                    if(dq[i] == '0')

                    {
                        dq.erase(dq.begin()+i);
                        break;
                    }


                }
            }

            j++;
        }

        for(i  = 0; i < k; i++)
        {
            cout<<dq[i];
        }
        cout<<endl;
    }








    return 0;
}
