#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==1)
    {
        float a=4.00*y;
        printf("Total: R$ %.2f\n",a);
    }
    if(x==2)
    {
        float b=4.50*y;
        printf("Total: R$ %.2f\n",b);
    }
    if(x==3)
    {
        float c=5.00*y;
        printf("Total: R$ %.2f\n",c);
    }
    if(x==4)
    {
        float d=2.00*y;
        printf("Total: R$ %.2f\n",d);
    }
    if(x==5)
    {
        float e=1.50*y;
        printf("Total: R$ %.2f\n",e);
    }
    return 0;
}
