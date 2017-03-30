#include <bits/stdc++.h>
using namespace std;
int Pow(int b,int p)
{
    if(p==0)return 1;

    else if(p%2==0)return Pow(b*b,p/2);
    else return b*Pow(b*b,p/2);
a.size()

}
int main()
{
    int i, j, k, l, n, t, sum = 0;

    string a;
    cin>>a;

    //int i;
    n=a.size();
    for(i =0; i <n ; i++)
    {
        sum = sum+ ((a[i]-'0') * Pow(2,n-i-1));
    }

        cout<<sum<<endl;
    return 0;
}
