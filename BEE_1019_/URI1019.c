#include<stdio.h>
int main()
{
    int s,m,h,ms,m1;
    scanf("%d",&ms);
    h=ms/3600;
    m1=ms%3600;
    m=m1/60;
    s=m1%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
