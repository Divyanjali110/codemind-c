#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,h;
    scanf("%f%f%f",&a,&b,&h);
    float c;
    c=(((a+b)*h)/2);
    printf("%0.4f",c);
}