#include<bits/stdc++.h>
#define llu long long unsigned
using namespace std;
llu fact(int n)
{
    if(n == 0) return 1;
    else return n*fact(n-1);
}

double npr(int n,int r)
{
    return (fact(n))/(fact(r)*(fact(n-r)));
}
int main()
{
    llu n, r;

    while(cin>>n>>r && n && r)
    {
        cout<<npr(n, r)<<endl;
    }


    return 0;
}
