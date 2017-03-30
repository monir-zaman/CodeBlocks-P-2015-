#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, n, t, s;
    int line, line2;
    string a;

    cin>>t;

    while(t--)

    {
        cin>>line;
        char word[line];
        int val[line];

        for(i = 0; i < line; i++)
        {
            cin>>word[i]>> val[i];
        }

        cin>>line2;

        int k= line2;
        double tt = 0;
        getchar();
        while(line2--)
        {
           // map<>
            getline(cin, a);

            int n = a.size();



            for(i = 0; i < line; i++)
            {
                for(j = 0; j < n; j++)
                {
                    if(word[i] == a[j]) tt+=(double)val[i];
                }
            }


        }

       printf("%.2lf$\n", tt/100);


    }


    return 0;
}
