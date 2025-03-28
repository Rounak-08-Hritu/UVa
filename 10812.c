#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a<=b||(a+b)%2!=0)
            printf("impossible\n");
        else
        {
            c=(a+b)/2;
            d=a-c;
            if(c>d)
                printf("%d %d\n",c,d);
            else
                printf("%d %d\n",d,c);
        }
    }
    return 0;
}
