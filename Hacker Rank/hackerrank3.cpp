#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    a=n%2;
    if((a==1)||((a==0)&&(n>=6 && n<=20)))
        printf("Weird\n");
    else
        printf("Not Weird\n");
}
