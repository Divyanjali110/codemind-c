#include<stdio.h>
int main()
{
    float b,da,hra,gs,pf;
    scanf("%f%f%f%f%f",&b,&da,&hra,&gs,&pf);
    pf=0.12*b;
    gs=b+da+hra+pf;
    printf("%0.2f
",pf);
    printf("%0.2f",gs);
}