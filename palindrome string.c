#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char str[50],rev[50];
    printf("enter the value of number\n");
    scanf(" %s",&str);
    len=strlen(str);
    for(i=0;i<len;i++){
        rev[i]=str[len-1-i];
    }
    if(strcmp (str,rev)==0)
    printf("palindrome");
    else
    printf("it is not palindrome");
    }
    
    
    

