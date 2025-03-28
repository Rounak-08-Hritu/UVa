#include<stdio.h>
int main()
{
    long long int a,b;
    int c,res;
    while(scanf("%lld %lld",&a,&b))
    {
        if(a==0&&b==0)
            break;
        res=0;
        c=0;
        while(a||b)
        {
            res=((a%10)+(b%10)+res)/10;
            a/=10;
            b/=10;
            c+=res;
        }
        if(c==0)
            printf("No carry operation.\n");
        else if(c==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",c);
    }

    return 0;
}
