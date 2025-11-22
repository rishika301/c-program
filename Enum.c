#include<stdio.h>
enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main(){
    enum week today;
    today=Wednesday;
    printf ("%d",today);
    return 0;
}
