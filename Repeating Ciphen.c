#include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
int main()

{

    int j=1,k;

    int i,n;
         scanf("%d",&n);

    char a[n];
    char b[n];

    scanf("%s",&a);

    for(i=0;i<n;i=i+j)
    {

        b[j-1]=a[i];

        j++;


    }


     b[j-1]='\0';




    printf("%s",b);


    return 0;



}

