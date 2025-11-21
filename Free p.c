#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(sizeof (int));
    if(p==NULL){
        printf("memory not allowed!\n");
        return 0;
    }
    printf("before free value=%d\n",*p);
    free(p);
    printf("memmory free successful\n",*p);
    free(p);
}
