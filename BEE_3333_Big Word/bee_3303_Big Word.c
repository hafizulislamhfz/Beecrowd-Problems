//https://www.beecrowd.com.br/judge/en/problems/view/3303
#include<stdio.h>
#include <string.h>
int main()
{
    char text[100];
    gets(text);
    if(strlen(text)>9)
        printf("palavrao");
    else
        printf("palavrinha");
}
