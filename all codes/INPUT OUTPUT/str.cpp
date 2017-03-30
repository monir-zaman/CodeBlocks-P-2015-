#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, t; char ch;

    string a;

    while(cin>>a)
    {
        n = a.size();

        for(i = 0; i < n-1; i++)
        {

            if(a[i] != a[i+1]) continue;

            else
            {

                for(j = i+2;j < n; j++)
                {
                    if(a[j] == a[i+1]) continue;
                    //swap(a[j], a[i+1]); break;

                    a[i+1] = a[j]; break;
                }

            }
        }

        cout<<a<<endl;

    }

    return 0;
}
