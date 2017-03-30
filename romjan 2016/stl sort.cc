#define ll long long
#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a%10 < b%10;
}
int main()
{
    vector<int>v;

    for(int i = 0; i< 6; i++)
    {
        int n;

        cin>>n;

        v.push_back(n);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i< 6; i++)
    {
        cout<<v[i]<<"   "<<endl;
    }


    return 0;
}










// MDPM-X4RM-KN7E-DAKP-NFTT
