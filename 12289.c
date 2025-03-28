#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[9];
        scanf("%s",s);
        getchar();
        int l=0,i;
        l=strlen(s);
        if(l>3)
            printf("3\n");
        else
        {
            if(s[0] == 'o' && s[1] == 'n' && s[2] == 'e') printf("1\n");
            else if(s[0] == 'o' && s[1] == 'n') printf("1\n");
            else if(s[0] == 'o' && s[2] == 'e') printf("1\n");
            else if(s[1] == 'n' && s[2] == 'e') printf("1\n");
            else if(s[0] == 't' && s[1] == 'w' && s[2] == 'o') printf("2\n");
            else if(s[0] == 't' && s[1] == 'w') printf("2\n");
            else if(s[0] == 't' && s[2] == 'o') printf("2\n");
            else if(s[1] == 'w' && s[2] == 'o') printf("2\n");
        }
    }
    return 0;
}
