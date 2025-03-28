#include<stdio.h>
int main()
{
    int n,j;
    int t,i,ans;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        ans=(n-1)/2;
        printf("Case %d: %d\n",i,a[ans]);
    }

    return 0;
}

