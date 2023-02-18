#include<stdio.h>
int main()
{
    int n,i,a=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a=i*i;
            printf("%d^2 = %d\n",i,a);
        }
    }
    return 0;
}

