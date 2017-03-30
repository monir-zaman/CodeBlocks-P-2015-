#include <bits/stdc++.h>
using namespace std;
void primeFactors(int n);
int main()
{
    int a, b, n, t, i, j;

    while(cin>>n)
    {
        primeFactors(n);
    }



    return 0;
}

void primeFactors(int n)
{
// if number is a even number, then print 2
    while(n%2 == 0)
    {
        cout<<2<<endl;
        n /= 2;
    }

// n must be odd at this point.
    for(int i = 3; i <= sqrt(n); i += 2)
    {
// while i divides n, print i and divide n
        while(n%i == 0)
        {
            cout<<i<<endl;
            n /= i;
        }
    }

// when n is a prime number and greater than 2
    if(n > 2)
        cout<<n<<endl;
}
