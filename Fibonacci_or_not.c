#include<stdio.h>
int main()
{
    int n,f1=0,f2=1,f3,flag,i;
    scanf("%d",&n);
    f3=f1+f2;
    while(f3<=n)
    {
        if(f3==n)
       {
         flag=1;
         break;
       }
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}