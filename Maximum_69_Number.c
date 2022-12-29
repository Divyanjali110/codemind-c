#include<stdio.h>
int dig(int n)
{
    int r,k=0;
    while(n>0)
    {
        r=n%10;
        k++;
        n=n/10;
    }
    return k;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int k=dig(n);
    int x[k];
    for(int i=k-1;i>=0;i--)
    {
        (x[i]=n%10);
        n=n/10;
}
for(i=0;i<k;i++)
{
if(x[i]!=9)
        {
            x[i]=9;
            break;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d",x[i]);
    }
}