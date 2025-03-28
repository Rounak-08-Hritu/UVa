#include<stdio.h>
int main()
{
    int n,j;
    double t,i,res,sum=0;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        res=ceil(sum/n);
        printf("Case %0.lf: %0.lf\n",i,res);
    }

    return 0;
}
