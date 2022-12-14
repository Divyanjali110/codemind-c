#include<stdio.h>
int main()
{
    int days,year,weeks;
scanf("%d%d%d",&days,&year,&weeks);
year=days/365;
weeks=(days%365)/7;
printf("%d
",year);
printf("%d",weeks);
}
