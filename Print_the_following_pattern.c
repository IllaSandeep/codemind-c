/*n=int(input())
for i in range(1,n+1):
    for j in range(1,n+1):
        if i==j or i==n+1-j:
            print(n-i+1,end=' ')
        else:
            print(' ',end='')
    print()*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if (i==j || i==n+1-j)
            {
                printf("%d ",n-i+1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}
