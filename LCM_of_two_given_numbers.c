#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%b==0)
    printf("%d",a);
    else if(b%a==0)
    printf("%d",b);
    else
    printf("%d",a*b);
}