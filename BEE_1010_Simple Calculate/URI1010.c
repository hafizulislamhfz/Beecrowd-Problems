#include<stdio.h>
int main()
{
    int c,c1,u,u1;
    float p,p1,i;
    scanf("%d %d %f",&c,&u,&p);
    scanf("%d %d %f",&c1,&u1,&p1);
    i=((u*p)+(u1*p1));
    printf("VALOR A PAGAR: R$ %.2f\n",i);
    return 0;
}
