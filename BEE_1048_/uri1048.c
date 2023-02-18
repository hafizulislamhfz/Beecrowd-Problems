#include<stdio.h>
int main()
{
    float s,a,b;
    scanf("%f",&s);
    if(s>=0 && s<=400)
    {
        a=(s*15)/100;
        b=s+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 15 %%\n");
    }
    else if(s>=400.01 && s<=800)
    {
        a=(s*12)/100;
        b=s+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 12 %%\n");
    }
    else if(s>=800.01 && s<=1200)
    {
        a=(s*10)/100;
        b=s+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 10 %%\n");
    }
    else if(s>=1200.01 && s<=2000)
    {
        a=(s*7)/100;
        b=s+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 7 %%\n");
    }
    else if(s>2000)
    {
        a=(s*4)/100;
        b=s+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
