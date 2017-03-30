#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, sum;
    cin>>n;
    if(n>1) sum = (n * (n+1)) / 2;
    else
    {
        sum = (abs(n) * (n-1)) / 2;
        sum++;

    }
    cout<<sum<<endl;
    return 0;
}
