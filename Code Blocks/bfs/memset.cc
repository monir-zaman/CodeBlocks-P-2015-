#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m[5];

    for(int i = 0; i < 5; i++) cin>>m[i];
    for(int i = 0; i < 5; i++) cout<<m[i]<<" ";
    cout<<endl;

    memset(m, 1, size(m));

    for(int i = 0; i < 5; i++) cout<<m[i]<<" ";


    return 0;
}
