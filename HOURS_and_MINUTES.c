#include<stdio.h>
int main()
{
    int  min;
    scanf("%d",&min);
    int a,b;
    a=min/60;
    b=min%60;
    printf("%d Hour(s) %d Minute(s)",a,b);
}