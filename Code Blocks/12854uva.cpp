
#include <stdio.h>
int a[100010],b[100010];
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int s1,s2;
        scanf("%d",&s1);
        for (int i=0; i<s1; i++)
            scanf("%d",&a[i]);
        scanf("%d",&s2);
        for (int i=0; i<s2; i++)
            scanf("%d",&b[i]);
        int ba=0,bb=0,cnt=0;
        while (ba<s1&&bb<s2)
        {
            if (a[ba]==b[bb])
            {
                cnt++;
                ba++;
                bb++;
            }
            else if (a[ba]<b[bb])
            {
                while (a[ba]<b[bb]&&ba<s1)
                    ba++;
            }
            else
            {
                while (a[ba]>b[bb]&&bb<s2)
                    bb++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
