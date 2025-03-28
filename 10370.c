#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,sum=0,avrg,c=0;
        scanf("%d",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        avrg=sum/n;
        for(i=0; i<n; i++)
        {
            if(a[i]>avrg)
                c++;
        }
        double ans=c*100/(double)n;
        printf("%.3lf%%\n",ans);
    }
}
