#include<stdio.h>
#include<string.h>
int main()
{
    char varsha[10];
    printf("enter your string");
    scanf("%s\n",&varsha);
    printf("%s",varsha);
    strcat(varsha,"tamanna");
    printf("%s",varsha);
    printf("after:%s\n",varsha);
}
