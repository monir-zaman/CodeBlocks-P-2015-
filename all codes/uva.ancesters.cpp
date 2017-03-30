#define llu unsigned long long
#define sc scanf
#define pt printf
#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n,n1, i, j, temp, t, v1, v2;

    cin>>t;

    while(t--)
    {
        v1=  0, v2 = 0;
        cin>>n;

        n1= n;

        vector<int>v,b;

        while(n)
        {
            temp = n % 2;
            v.push_back(temp);

            n = n/ 2;
        }
        for(i= v.size()-1; i >= 0; i--)
        {
            if(v[i]== 1) v1++;
        }
        //cout<<v1<<endl;
    }


    return 0;
}
