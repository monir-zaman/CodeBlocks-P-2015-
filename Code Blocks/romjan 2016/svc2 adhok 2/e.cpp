#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i, j, n, t, tmp, a[100000];

    while(cin>>n && n)
    {
        for(i = 0; i< n; i++)
        {
            cin>>a[i];
        }
        int sum = 0, k = 1;
        while(n--)
        {
            for(i = 0; i< n; i++)
            {
                if(a[i] > 0)
                {
                    if(a[i+k] < 0 && i+k < n)
                    {
                        tmp = a[i] +a[i+k];

                        if(a[i] > abs(a[i+k]))
                        {
                            sum+= abs(a[i+k] *k);
                            a[i] = tmp;
                            a[i+k] = 0;
                        }

                        else
                        {
                            sum+= abs(a[i] * k);
                            a[i+k] = tmp;
                            a[i] = 0;
                        }



                    }

                    else if(a[i-k] < 0 && i-k >= 0)
                    {
                        tmp = a[i] +a[i-k];

                        if(a[i] > abs(a[i-k]))
                        {
                            sum+= abs(a[i-k] * k);
                            a[i] = tmp;
                            a[i-k] = 0;
                        }

                        else
                        {
                            sum+= abs(a[i]) * k;
                            a[i-k] = tmp;
                            a[i] = 0;
                        }
                    }
                }
            }

            k++;
        }



        //

       // cout<<sum<<endl;

        //cout<<endl;
        for(i = 0; i< 5; i++)
        {
            cout<<a[i]<<" jllllllllllll  ";
        }
    }

    return 0;
}





