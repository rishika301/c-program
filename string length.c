#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    printf("your name");
    scanf("%s",&a);
    int length =strlen(a);
    printf("string length=%d",length);
}
