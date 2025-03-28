#include<stdio.h>
#include<string.h>
int main()
{
    char s[44];
    int t,n,sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        if(strcmp(s,"donate")==0)
        {
            scanf("%d",&n);
            sum=sum+n;
        }
        else
            printf("%d\n",sum);
    }
    return 0;
}
