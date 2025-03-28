#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    int n;
    while (scanf("%d",&n),n)
    {
        vector<int> a;

        for(int i=0; i<n; i++)
        {
            int m;
            scanf("%d",&m);
            if(m>0) a.push_back(m);
        }

        int sz = a.size();
        if(sz==0) printf("0\n");
        else
        {
            for(int i=0; i<sz; i++)
            {
                printf("%d",a.at(i));
                if(i!=sz-1) printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

