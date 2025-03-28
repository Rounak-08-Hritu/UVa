#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a[99],i,j,c=0;
    char s[99];
    int p,sum=0,l;
    while(scanf("%s",s))
    {
    l=strlen(s);
    if(l==1&&s[0]-48==0)
        break;
    else
    {
        c=0;
        sum=0;
    for(i=0,j=l;i<=l,j>=1;i++,j--)
    {
        p=pow(2,j)-1;
        sum=sum+(s[i]-48)*p;
    }
    printf("%d\n",sum);
    }
    }
    return 0;


}
