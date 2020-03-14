
#include<stdio.h>
  #include<string.h>
 #include<stdlib.h>
int main()


{


    char a[103];
    char b[103];

    scanf("%s%s",a,b);

    int d=strlen(a);
     char  c[d];
    int i;

    for(i=0;i<d;i++)

    {

        if(a[i]==b[i])

        {
            c[i]='0';
        }

        else

        {
            c[i]='1';
        }



}
 for(i=0;i<d;i++)

    {
       printf("%c",c[i]);
    }
    return 0;
}
