#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,flag=0;
    char a[2];
    char b[15];
    fgets(a,3,stdin);
    for(i=0; i< 15;i++)
    {
        scanf("%c", &b[i]);
    }

    for(i=0; i< 15;i++)
    {
        if(b[i]==a[0] || b[i]==a[1])
           {
               flag=1;
           }
    }
    if(flag==1)
    {
      printf("YES");

    }

    else
    {

     printf("NO");
    }

    return 0;
}

