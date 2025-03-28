#include <stdio.h>
int main()
{
    int t,a,b, c,i;
    scanf("%d", &t);

    for (i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if ((b>a && a>c) || (b<a && a<c))
            printf("Case %d: %d\n",i,a);
        else if ((a>b && b>c) || (a<b && b<c))
            printf("Case %d: %d\n", i,b);
        else
            printf("Case %d: %d\n", i,c);
    }
    return 0;
}
