#include<stdio.h>
int main()
{
    int n,t,j=0;
    int b[9999];
    while(scanf("%d",&n))
    {j=0;
    if(n<0)
        break;
    do
    {
        t=n%3;
        n=n/3;
        b[j]=t;
        j++;
    }
    while(n);
    for(--j;j>=0;j--)
    {
        printf("%d",b[j]);
    }
    printf("\n");
    }
    return 0;
}
