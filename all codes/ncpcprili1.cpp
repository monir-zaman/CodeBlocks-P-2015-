#define ll long long
#define pt printf
#define sc scanf
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll t, a, b, n, temp, cas= 0, day[10];

    //day[0] =

    string week[8],w[8], F;

    cin>>t;

    while(t--)
    {
        int i = 0, j;
        cas++;
        cin>>a>>b>>F;




        week[0] = "SATURDAY";


        week[1] = "SUNDAY";


        week[2] = "MONDAY" ;


        week[3] = "TUESDAY";


        week[4] = "WEDNESDAY";


        week[5] = "THURSDAY";


        week[6] = "FRIDAY";


        week[7] = "SATURDAY";

            w[0] = F;

        for(j = 0; j<7; j++)
        {
            if(week[j] ==  w[0])
            {
                n = j;
                break;
            }
        }
        //cout<<n<<endl;
        b = b - a;

        temp = b % 7;


        if(temp == 0) cout<<"Case "<<cas<<": "<<week[n]<<endl;

        if(temp == 1) cout<<"Case "<<cas<<": "<<week[1]<<endl;

        if(temp == 2) cout<<"Case "<<cas<<": "<<week[2]<<endl;

        if(temp == 3) cout<<"Case "<<cas<<": "<<week[3]<<endl;

        if(temp == 4) cout<<"Case "<<cas<<": "<<week[4]<<endl;

        if(temp == 5) cout<<"Case "<<cas<<": "<<week[5]<<endl;

        if(temp == 6) cout<<"Case "<<cas<<": "<<week[6]<<endl;



    }
    return 0;
}
