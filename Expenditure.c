#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int z=y*30;
    if(x>=z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}