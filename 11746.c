#include<stdio.h>
int main()
{
    int t,n,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        int a[n],i,h=0,l=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(i==n-1)
                break;
            if(a[i]<a[i+1])
                h++;
            if(a[i]>a[i+1])
                l++;
        }
        printf("Case %d: %d %d\n",j,h,l);
    }
    return 0;
}
