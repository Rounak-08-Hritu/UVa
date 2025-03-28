#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI acos(-1)
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double l,r,area;
        scanf("%lf",&l);
        r=l/5;
        area=r*r*PI;
        printf("%.2lf %.2lf\n",area,l*.6*l-area);
    }
    return 0;
}
