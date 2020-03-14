#include<stdio.h>
 #include<string.h>

int  main()
{


    char  a[102];
    char  b[102];


    scanf("%s",a);
    int f=0;
    scanf("%s",b);
    int m=strlen(a);
    int i;


        for(i=0;i<m;i++)
        {

            if(a[i]==b[m-1-i])
            {

                f=1;
            }

            else
            {

                f=0;
                break;
            }
        }

              if(f)
              {

                printf("YES");
              }

                else
            printf("NO");



            return 0;
}

