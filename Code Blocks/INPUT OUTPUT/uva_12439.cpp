#include <bits/stdc++.h>
using namespace std;
int main()
{

    //freopen("mmmmmmmmmmmm.txt", "w", stdout);
    int i,ij, n, month, month2, j, t,yr, yr2;

    char ch, ch2;

    STRING A,B;

    CIN>>T;
    IJ = 0;
    WHILE(T--)
    {

        CIN>>A>>MONTH>>CH>>YR;
        CIN>>B>>MONTH2>>CH2>>YR2; //COUT<<CH<<" "<<CH2<<ENDL;
        INT CNT = 0;
        IF((A != "JANUARY" && A != "FEBRUARY")) YR = YR+1;
        IF((B == "JANUARY" || B == "FEBRUARY"))
        {
            IF(!(B == "FEBRUARY" && MONTH2 == 29)) YR2 = YR2-1;
        }

        FOR(I = YR; I <=YR2; I++)
        {
            IF(I % 4 == 0 && I%100 == 0 && I %400 == 0)
            {
                CNT++;


            }

            ELSE IF(I % 4 == 0 && I%100 != 0)  CNT++;
        }

        //COUT<<CNT<<ENDL;
        PRINTF("CASE %D: %D\N", ++IJ, CNT);

    }

    return 0;
}
