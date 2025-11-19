#include<stdio.h>
int main()
{
    int row,col;
    printf("enter row and column\n");
    scanf("%d%d",&row,&col);
    
    int a[row][col],b[row][col],c[row][col];
    printf("enter the value of a\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        scanf("%d",&a[i][j]);
    }

    printf("enter the value of b\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("result matrix\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        printf("%d",c[i][j]);
    }
}
