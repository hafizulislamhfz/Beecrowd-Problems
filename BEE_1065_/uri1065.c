#include<stdio.h>
int main()
{
    int a=0,i,n;
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
            a++;
    }
    printf("%d valores pares\n",a);
    return 0;
}

