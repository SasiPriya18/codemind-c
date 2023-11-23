#include<stdio.h>
int main()
{
    int n,i,m=12;
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}