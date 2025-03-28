#include<stdio.h>
#include<limits.h>
int main()
{
    int t,n,max=0,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);

            if(a[j]>max)
            {max=a[j];}
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}

