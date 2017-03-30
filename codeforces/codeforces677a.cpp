#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;

    cin>>n>>h;

    int tmp = 0, k;

    while(n--)
    {
        cin>>k;

        if(k <= h) tmp++;

        else tmp+=2;
    }
    cout<<tmp<<endl;

    return 0;
}
