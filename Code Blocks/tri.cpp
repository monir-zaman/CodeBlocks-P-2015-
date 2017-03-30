#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long unsigned num,sum;
    while(cin>>num)
    {
        //;
        if(num%2==0)
        sum=(num*(num+2)*((2*num)+1))/8;
        else
        sum=((num*(num+2)*((2*num)+1))-1)/8;
        cout<<sum<<endl;
    }
    return 0;
}
