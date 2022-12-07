#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float tb,b,sc;
    if(n<=199)
    {
        b=n*1.2;
    }
    else if(n>200&&n<400)
    {
        b=n*1.5;
    }
    else if(n>400&&n<600)
    {
        b=n*1.8;
    }
    else
    {
        b=n*2.0;
    }
    if(b>400)
    {
        sc=0.15*b;
    }
    else
    {
        sc=100;
    }
    tb=b+sc;
    printf("%0.2f",tb);
}