#include <stdio.h>
int main()
{
    int i, j,temp,arr[100];
    for(i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x=arr[0];
    int y=arr[1];
    int z=arr[2];
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(arr[i] > arr[j])
            {
                temp   = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<3; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n%d\n%d\n%d\n",x,y,z);
    return 0;
}
