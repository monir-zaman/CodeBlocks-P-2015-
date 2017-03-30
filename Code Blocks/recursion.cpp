#include <bits/stdc++.h>

using namespace std;

int rec(int n)
{
    if(n == 1) {cout<<n<<endl; return 1;}

    else
    {cout<<n<<endl;return n + rec(n-1);}
}

int main()
{
    int n, i, j, t;
    while(cin>>n)
    {
        cout<<rec(n)<<endl;
    }
    return 0;
}
