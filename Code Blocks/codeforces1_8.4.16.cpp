#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{

    if(b == 0 ) return a;
    if(a < b) swap(a, b);

    int r =  a % b;

    return GCD(b, r);


}


int main()
{
    int i, j, n, t, k, temp,temp1, c, a, b;

    vector<int>arr;

    while(cin>>n)
    {
        //int arr[n];

        k = 0;

        for(i  = 0; i < n; i++){
            cin>>temp; arr.push_back(temp);}

            sort(arr.begin(), arr.end());
            //cout<<i<<endl;
        for(i  = 0; i < n-1; i++)
        {
            temp = GCD(arr[i], arr[i+1]);

            if(temp == 1) continue;

            else
            {

                for(j = arr[i]+1; j < arr[i+1]; j++)
                {
                    temp = GCD(arr[i], j);
                    temp1 = GCD(j, arr[i+1]);
                    if(temp == 1 && temp1 == 1)
                    {
                        arr.push_back(j);

                        k++;

                        break;
                    }

                    else continue;
                }

            }
        }

        cout<<k<<endl;
        sort(arr.begin(), arr.end());

        temp1 = arr.size();
         for(i  = 0; i < temp1-1; i++)
            cout<<arr[i]<<" ";

            cout<<arr[temp1-1]<<endl;



        arr.clear();
    }


    return 0;
}
