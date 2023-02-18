#include<stdio.h>
int main()
{
    int a=0,i;
    float n;
    for(i=0;i<6;i++)
    {
        scanf("%f",&n);
        if(n>0)
            a++;
    }
    printf("%d valores positivos\n",a);
    return 0;
}
