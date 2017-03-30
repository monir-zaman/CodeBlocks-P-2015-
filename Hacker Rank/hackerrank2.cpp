#include<bits/stdc++.h>
using namespace std;
int main()
{
    double M,tip,tax;
    long long T,X,final_price;
    while(scanf("%lf",&M)!=EOF)
    {
        scanf("%lld",&T);
        scanf("%lld",&X);
        tip=(T*M)/100.00;
        tax=(X*M)/100.00;
        final_price=round(M+tip+tax);
        printf("The final price of the meal is $%lld.\n",final_price);
    }
}
