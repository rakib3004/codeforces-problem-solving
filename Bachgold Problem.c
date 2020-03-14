#include<stdio.h>
int main()
{


    int i,n;

     int a=0;
    scanf("%d",&n);
    if(n==2)
    {
         a++;
         printf("%d\n",a) ;
        printf("2") ;
        return 0;
    }

    if(n==3)
    {
            a++;
         printf("%d\n",a) ;
        printf("3") ;

        return 0;
    }

      printf("%d\n",n/2) ;
          for(i=0;((n!=2)||(n!=3));i++)
          {

              printf("2 ");


              n=n-2;
              if(n==3)
              {

                  printf("3");
              return 0;
              }

              if(n==2)
              {
                   printf("2");
                return 0;
              }

          }

          return 0;
}

