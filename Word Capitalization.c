
#include<stdio.h>

int main()
{

    char a[1000];

      scanf("%s",&a);


      if(a[0]<97)
      {

          printf("%s",a);
          return 0;
      }

      else
      {
           a[0]=a[0]-32;

              printf("%s",a);
      }




    return 0;

}

