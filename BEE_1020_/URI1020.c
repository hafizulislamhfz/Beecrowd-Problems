#include<stdio.h>
int main()
{
    int d,m,y,md,m1;
    scanf("%d",&md);
    y=md/365;
    m1=md%365;
    m=m1/30;
    d=m1%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}

