#include <stdio.h>
int main()
{
    int c,v,n,t=1,i=0;
    while(scanf("%d", &n) && n>0)
    {++i;
        c=0;
        v=1;
        if(n==1)
            printf("Case %d: 0\n",i);
        else
        {
            while(n>v)
            {
                v=2*v;
                c++;
            }
            printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
