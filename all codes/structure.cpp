#include <bits/stdc++.h>
using namespace std;
void prime(int n);
int main()
{
    int a, b, n, t, i, j;

    while(cin>>n)
    {
        prime(n);
    }



    return 0;
}


void prime(int n)
{
    while(n % 2 == 0)
    {
        cout<<2<<endl;

        n = n / 2;
    }

    int i;

    for(i = 3; i <= sqrt(n); i+=2)
    {
        while(n % i == 0)
        {
            cout<<i<<endl;
            n/= i;
        }
    }

    if(n > 2) cout<<n<<endl;
}
