#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    char b[999999];
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        int t,j=0,sum=0;
        do
        {
            t=n%2;
            n=n/2;
            b[j]=t;
            sum=sum+b[j];
            j++;
        }
        while(n);
        printf("The parity of ");
        for(--j; j>=0; j--)
        {
            printf("%d",b[j]);
        }
        printf(" is %d (mod 2).\n",sum);
    }

    return 0;
}
