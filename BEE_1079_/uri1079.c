#include <stdio.h>

int main() {
    int N,i;
    float n1,n2,n3,avg,sum;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%f %f %f",&n1,&n2,&n3);
        sum=n1*2+n2*3+n3*5;
        avg=sum/(2+3+5);
        printf("%.1f\n",avg);
    }
    return 0;
}
