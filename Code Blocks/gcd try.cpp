#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b);
int LCM(int a, int b);
int main()
{
    int a, b, n, t, i, j;

    while(cin>>a>>b)
    {
        cout<<GCD(a, b)<<endl;

        cout<<LCM(a, b)<<endl;
    }



    return 0;
}


int GCD(int a, int b)
{
    if(a < b) swap(a, b);

    while(a % b != 0)
    {
        a = a % b;

        swap(a, b);
    }

    return b;


}

int LCM( int a, int b)
{
    return (a*b) / GCD(a,b);
}

