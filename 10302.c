#include<stdio.h>
int main()
{
    long long int i,n,r;
    while(scanf("%lld",&n)!=EOF)
    {
        r=0;
        for(i=1;i<=n;i++)
        {
            r=r+i*i*i;
        }
        printf("%lld\n",r);
    }
    return 0;
}
