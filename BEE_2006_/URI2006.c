#include<stdio.h>
int main()
{
    int t,p,c=0;
    scanf("%d",&t);
    if(1<=t && t<=4)
    {
        for(int i=0;i<5;i++)
        {
            scanf("%d",&p);
            if(t==p)
                c++;
        }
        printf("%d\n",c);
    }
}
