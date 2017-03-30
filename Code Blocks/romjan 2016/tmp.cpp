#define ll long long
#include <bits/stdc++.h>
using namespace std;
int r[200], c[200];

void cc()
{
    r['A']=1,r['A']=1;
    r['B']=1,r['B']=2;
    r['C']=1,r['C']=3;
    r['K']=1,r['K']=3;
    r['D']=1,r['D']=4;
    r['E']=1,r['E']=5;
    r['F']=2,r['F']=1;
    r['G']=2,r['G']=2;
    r['H']=2,r['H']=3;
    r['I']=2,r['I']=4;
    r['J']=2,r['J']=5;
    r['L']=3,r['L']=1;
    r['M']=3,r['M']=2;
    r['N']=3,r['N']=3;
    r['O']=3,r['O']=4;
    r['P']=3,r['P']=5;
    r['Q']=4,r['Q']=1;
    r['R']=4,r['R']=2;
    r['S']=4,r['S']=3;
    r['T']=4,r['T']=4;
    r['U']=4,r['U']=5;
    r['V']=5,r['V']=1;
    r['W']=5,r['W']=2;
    r['X']=5,r['X']=3;
    r['Y']=5,r['Y']=4;
    r['Z']=5,r['Z']=5;

}
int main()
{
    int t, cs, i, j, k,m , n, tmp;

    cin>>t;

    getchar();

    cc();
    cs = 1;

    while(t--)
    {

        string st;
        cin>>st;
        printf("Case %d: ",cs++);
        for(i=0;  st[i]; i++)
        {
            k=st[i];
            k=k-32;
            if(i)cout<<" ";
            for(j=0; j<r[k]; j++)cout<<".";
            cout<<",";
            for(j=0; j<r[k]; j++)cout<<".";

        }
        cout<<endl;

    }

    return 0;
}

