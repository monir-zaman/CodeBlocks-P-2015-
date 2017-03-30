#include<bits/stdc++.h>


using namespace std;

int main()
{
    long long a,b,c,d,e,f, temp1, temp2, s1,s2,s;
    //int
    while(cin>>a>>b>>c>>d>>e>>f )
    {
        s = a+b+c+d+e+f;
        if(s == 0) break;
        s1 = a+b+c+d;
        temp1 = s1 - (a+c+e);
        temp2 = s1 - (b+d+f);

        cout<<temp2<<endl;
        printf("Anna's won-loss record is %lld-%lld.\n", temp1, temp2);
    }
    return 0;
}
