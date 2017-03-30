#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>b;int n;
    cin>>n;
    b.push_back(n);
    b.pop_back(b[0]);
    cout<<b[0]<<endl;

    return 0;
}
