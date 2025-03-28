#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 && c==0)
            break;
        if(a<=0 || b<=0 || c<=0)
        {
            printf("Wrong\n");
        }
        else if((c*c==a*a+b*b) || (a*a==b*b+c*c) || (b*b==a*a+c*c))
            printf("right\n");
        else
            printf("worng\n");
    }
    return 0;
}
