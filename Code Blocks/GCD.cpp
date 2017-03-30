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

        //cout<<LCM(a, b)<<endl;
    }



    return 0;
}


int GCD(int a, int b)
{

    if(b ==0 ) return a;
    if(a < b) swap(a, b);

    int r =  a % b;

    return GCD(b, r);


}


