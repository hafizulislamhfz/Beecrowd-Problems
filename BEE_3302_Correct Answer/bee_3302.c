//https://www.beecrowd.com.br/judge/en/problems/view/3302
#include <stdio.h>
int main() {
    int N,i;
    scanf("%d",&N);
    int num[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("resposta %d: %d\n",i+1,num[i]);
    }
    return 0;
}
