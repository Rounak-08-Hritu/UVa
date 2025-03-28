#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    double t1,t2,t,d,u,v,i;
    scanf("%lf",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf",&d,&u,&v);
        if(u>=v||u==0||v==0||d<0)
        {
            printf("Case %.0lf: can't determine\n",i);
        }
        else
        {
            t1=d/v;
            t2=d/sqrt(v*v-u*u);
            printf("Case %.0lf: %.3lf\n",i,fabs(t1-t2));
        }
    }
    return 0;
}
