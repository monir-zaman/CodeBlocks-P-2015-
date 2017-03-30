#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, ans, a = 0, b = 0, k;
    string s;
    cin>>s;
    int sz = s.size();
    k = 1;
    for(int  i = sz - 1; i>= 0; i--)
    {

        //k *= 10;
        a += (s[i] - 48 ) * k;
        k *= 10;
        //a += k;
    }
    cin>>s;
    sz = s.size();
    k = 1;
    for(int  i = sz - 1; i>= 0; i--)
    {

        //k *= 10;
        b += (s[i] - 48 ) * k;
        k *= 10;
        //a += k;
    }
    cout<<a<<" "<<b<<endl;
    if((a % 2) == 0 || b%2 != 0 )printf("yes\n");

    else printf("no\n");

    return 0;
}
