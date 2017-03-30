#include <bits/stdc++.h>

using namespace std;

int main() {

    int i, j, k, m, n, temp, t, sum;

    while(cin>> t && t > 0)
    {
        sum = 0;
        n = 0;
        for(i = t ; i> 0; i++)
        {
            if(i % 2 == 0)
            {
                n++;
                sum+= i;
            }

            if(n==5) break;

        }

        cout<<sum<<endl;
    }
    return 0;
}
