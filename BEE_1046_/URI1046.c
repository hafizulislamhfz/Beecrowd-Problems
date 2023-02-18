#include<stdio.h>
int main()
{
    int st,et,a;
    scanf("%d %d",&st,&et);
    a=et-st;
    if(a<0)
        a=24+a;
    if(st==et)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S)\n",a);
    return 0;
}
