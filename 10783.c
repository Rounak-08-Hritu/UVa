#include<stdio.h>
int main()
{
    int i,t,j,a,b,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            for(j=b;j<=a;j++)
            {
                if(j%2!=0)
                    sum=sum+j;
            }
        }
        else
        {
            for(j=a;j<=b;j++)
            {
                if(j%2!=0)
                    sum=sum+j;
            }
        }
        printf("Case %d: %d\n",i,sum);

    }
    return 0;
}
