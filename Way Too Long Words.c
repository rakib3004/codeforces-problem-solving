#include<stdio.h>

#include<string.h>


int main()

{


    int n;
    int i;
    scanf("%d",&n);

    char a[n][200];
    int b[n];


    for(i=0;i<n;i++)
    {

        scanf("%s",&a[i]);
    }

    for(i=0;i<n;i++)
    {

        b[i]=strlen(a[i]);

        if((b[i])<=10)
        {

            printf("%s\n",a[i]);
        }
        else
        {


            printf("%c",a[i][0]);
            printf("%d",b[i]-2);
            printf("%c\n",a[i][b[i]-1]);
        }
    }

            return 0;

}

