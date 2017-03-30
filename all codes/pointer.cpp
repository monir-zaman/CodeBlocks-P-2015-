#include <bits/stdc++.h>
using namespace std;

int p;

int GCD(int x, int y)
{
    for(p = x; p>0; p--)
    {
        if(y % p == 0) return p;
    }
}
int main()
{
    int G, N, i, j, temp;

    cin>>N;
    G=0;
    for(i=1; i<N; i++)
        for(j=i+1; j<=N; j++)
        {
            G+=GCD(i,j);
        }
    /*Here GCD() is a function that finds
    the greatest common divisor of the two
    input numbers*/
    cout<<G<<endl;
    return 0;
}
