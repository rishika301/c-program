#include<stdio.h>
int main()
{
    char a[10];
    printf("enter name\n");
    fgets(a,sizeof(a),stdin);
    printf("%s",a);
}
