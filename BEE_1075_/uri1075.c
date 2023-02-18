#include<stdio.h>
int main()
{
    int i,N,a;
    scanf("%d",&N);
    for(i=1;i<10001;i++)
    {
        a=i%N;
        if(a==2){
        printf("%d\n",i);
        }
    }
    return 0;
}
