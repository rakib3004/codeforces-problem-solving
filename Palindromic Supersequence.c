
#include<stdio.h>
#include<string.h>
 #include<stdlib.h>
int main()

{
       int i;
       int n;
    char  f[1000];
    scanf("%s",&f);

     n= strlen(f);
     printf("%s",f);

     for(i=n-1;i>=0;i--)
     {
        printf("%c",f[i]);

     }

     return 0;
}
