
#include<stdio.h>

int main()


{


    int n;

    scanf("%d",&n);
    char  a[n][5];
    int i;
        int x=0;
    for(i=0;i<n;i++)
    {


        scanf("%s",&a[i]);
                  }


       for(i=0;i<n;i++)
       {



        if(a[i][0]=='X'&&a[i][1]=='+')
                            {

                                x++;
                            }
      else if(a[i][0]=='X'&&a[i][1]=='-')
      {

          x--;
      }
        else if(a[i][2]=='X'&&a[i][1]=='+')
        {

            ++x;
        }
         else if(a[i][2]=='X'&&a[i][1]=='-')

         {
             --x;
         }
         else

            {

            }


       }

      printf("%d",x);
        return 0;


}
