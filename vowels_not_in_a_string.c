#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int a=0,e=0,o=0,u=0,i=0,c;
    for(int j=0;s[j]!=NULL;j++)
    {
        if(s[j]=='a')
         {
             a++;
         }
        if(s[j]=='e')
        {
            e++;
        }
        if(s[j]=='i')
        {
            i++;
        }
        if(s[j]=='o')
        {
            o++;
        }
        if(s[j]=='u')
        {
            u++;
        }
    }
    if(a==0)
    {
        printf("a ");
    }
    if(e==0)
    {
        printf("e ");
    }
     if(i==0)
    {
        printf("i ");
    }
     if(o==0)
    {
        printf("o ");
    }
    if(u==0)
    {
        printf("u ");
    }
    if(a!=0&&e!=0&&i!=0&&o!=0&&u!=0)
    {
        printf("0 ");
    }

}