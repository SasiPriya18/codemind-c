#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    int p=a+(b*2);
    if(p>=x)
    {
        printf("Qualify");
    }
    else 
    printf("Not Qualify");
}