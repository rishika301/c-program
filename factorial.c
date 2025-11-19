#include<stdio.h>
int fact(int a){{
    if(a==0){
        return 1;
    }
    return a*fact(a-1);
}
int main(){
    int num;
    printf("enter the value og number");
    scanf("%d",&num);
    printf("factorial:%d",fact(num));
}
}

    
