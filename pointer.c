#include<stdio.h>
int main()
{
    int a=20,b=30;
    int *p1,*p2,temp;
    p1=&a;
    p2=&b;
    printf("before=%d,%d\n",a,b);
    
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after=%d,%d",a,b);
}
    
    
    
    

