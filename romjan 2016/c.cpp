#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row[120],col[120];
    row['A']=1,col['A']=1;
    row['B']=1,col['B']=2;
    row['C']=1,col['C']=3;
    row['K']=1,col['K']=3;
    row['D']=1,col['D']=4;
    row['E']=1,col['E']=5;
    row['F']=2,col['F']=1;
    row['G']=2,col['G']=2;
    row['H']=2,col['H']=3;
    row['I']=2,col['I']=4;
    row['J']=2,col['J']=5;
    row['L']=3,col['L']=1;
    row['M']=3,col['M']=2;
    row['N']=3,col['N']=3;
    row['O']=3,col['O']=4;
    row['P']=3,col['P']=5;
    row['Q']=4,col['Q']=1;
    row['R']=4,col['R']=2;
    row['S']=4,col['S']=3;
    row['T']=4,col['T']=4;
    row['U']=4,col['U']=5;
    row['V']=5,col['V']=1;
    row['W']=5,col['W']=2;
    row['X']=5,col['X']=3;
    row['Y']=5,col['Y']=4;
    row['Z']=5,col['Z']=5;
    int test,i,j,k,casio=1;
    scanf("%d",&test);
    // cout<<row[83]<<" "<<col[83]<<endl;
    while(test--)
    {
        string str;
        cin>>str;
        printf("Case %d: ",casio++);
        for(i=0; str[i]; i++)
        {
            k=str[i];
            k=k-32;
            //  cout<<k<<endl;
            if(i)printf(" ");
            for(j=0; j<row[k]; j++)printf(".");
            printf(",");
            for(j=0; j<col[k]; j++)printf(".");

        }
        printf("\n");

    }

}
