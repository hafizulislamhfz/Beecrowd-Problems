#include<stdio.h>
int main()
{
    char n[30];
    double fs,sale,ts;
    gets (n);
    scanf("%lf %lf",&fs,&sale);
    ts=(fs+((sale*15)/100));
    printf("TOTAL = R$ %.2lf\n",ts);
    return 0;
}
