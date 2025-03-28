#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
for(i=1;i<=t;i++)
{
    int t1,t2,f,a,ct1,ct2,ct3,ct,m;
    scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
    if(ct1>=ct2 && ct1>=ct3)
    {
        if(ct2>=ct3)
            ct=(ct1+ct2)/2;
        else
            ct=(ct1+ct3)/2;
    }
    else if(ct2>=ct1&&ct2>=ct3)
    {
        if(ct1>=ct3)
            ct=(ct2+ct1)/2;
        else
            ct=(ct2+ct3)/2;
    }
    else
    {
        if(ct1>=ct2)
            ct=(ct3+ct1)/2;
        else
            ct=(ct3+ct2)/2;
    }
    m=ct+t1+t2+a+f;
    if(m>=90)
        printf("Case %d: A\n",i);
    else if(m>=80 &&m<90)
         printf("Case %d: B\n",i);
    else if(m>=70&&m<80)
         printf("Case %d: C\n",i);
    else if(m>=60&&m<70)
        printf("Case %d: D\n",i);
    else
        printf("Case %d: F\n",i);
}
return 0;
}
