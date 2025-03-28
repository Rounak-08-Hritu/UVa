#include<stdio.h>
int main()
{
    int n,i=0;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        else
            i++;
        int a[n],j,sum=0,ans;
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[j]);
           sum=sum+a[j];
        }
        sum=sum/n;
        ans=0;
        for(j=0;j<n;j++)
        {
            if(a[j]>sum)
                ans=ans+a[j]-sum;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n",i,ans);
    }
    return 0;
}
