#include<stdio.h>
int main()
{
    int a,b,i,r,f=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        f=0;
        int t=i;
        while(t!=0)
        {
            r=t%10;
            if(r==0 || i%r!=0)
            {
                f=1;
            }
            t=t/10;
        }
        if(f==0)
        {
            printf("%d ",i);
        }
    }
}