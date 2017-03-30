#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, x;
    for(i = 0, x =0; i < 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            x+=(i+j-1);
            cout<<x<<endl;

        }

        cout<<endl;

    }

}
