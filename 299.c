#include<stdio.h>
int main()
{
    int t,i,j,k,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    c++;
                    s=a[k];
                    a[k]=a[j];
                    a[j]=s;
                }
            }
        }
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j]);
        }
        printf("\n%d\n",c);
    }
}
