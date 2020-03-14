
#include<stdio.h>


int  main()
{


    char  a[102];


    scanf("%s",a);
            for(int i=0; i<102;i++)
            {


                if(a[i]=='H'||a[i]=='Q'||a[i]=='9')

                {
                    printf("YES");

                 return 0;
                }

                if(a[i]=='\0')
                {

                    break;
                }
            }

            printf("NO");

}
