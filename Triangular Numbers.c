#include<stdio.h>

int main()

{
         int s;
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<100;i++)
    {
     s=(i*(i+1))/2;
     if(n==s)
     {

         printf("YES");
         return 0;
     }

     else if(n<s)
     {
         printf("NO");
         return 0;
     }

     else
     {

         continue;
     }

    }

    return 0;
}

