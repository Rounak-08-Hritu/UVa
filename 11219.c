#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        printf("\n");
        int cd,cm,cy,bd,bm,by;
        scanf("%d%d%d",&cd,&cm,&cy);
        scanf("%d%d%d",&bd,&bm,&by);
        if(cy<by)
            printf("Case #%d: Invalid birth date\n",i);
        else if(cy-by>=130)
            printf("Case #%d: Check birth date\n",i);
        else if(cy==by||bm==cm||cd==bd)
            printf("0\n");
        else
        {
            if(cm>=bm)
                printf("Case #%d: %d\n",i,cy-by);
            else
                printf("Case #%d: %d\n",i,cy-by-1);
        }

        }
    return 0;
}
