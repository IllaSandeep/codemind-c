#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,check;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,s=0;
    scanf("%d",&x);
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
           max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        check=0;
        check=a[i]+x;
        if(check>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }

    }


}