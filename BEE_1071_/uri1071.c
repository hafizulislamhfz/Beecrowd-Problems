#include<stdio.h>
int main()
{
    int a,b,i,n=0;
    scanf("%d %d",&a,&b);
    for(i=b+1;i<=a-1;i++){
       if(i%2==1)
          n=n+i;
       else if(i%2==-1)
          n=n+i;
    }
    printf("%d\n",n);
}s
