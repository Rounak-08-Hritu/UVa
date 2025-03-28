#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char a[100];
    while(scanf("%s",a) && strcmp(a,"*"))
        {
            i++;
            if(!strcmp(a,"Hajj"))
            {
                printf("Case %d: Hajj-e-Akbar\n",i);
            }
            else
            {
                printf("Case %d: Hajj-e-Asghar\n",i);
            }
        }
    return 0;
}
