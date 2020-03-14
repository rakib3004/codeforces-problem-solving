
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

      {


 int i,n,c=0,p=0;

       scanf("%d",&n);

    int a[n];


       for(i=0;i<n;i++)
       {

           scanf("%d",&a[i]) ;

           if(a[i]>0)

           {

               p++;
           }

           else if(a[i]<0)
           {

               c++;
           }

           else

           {

           }

       }

       int k=(n/2)+(n%2) ;


       if(p>=k)
       {

           printf("2") ;
       }



       else if(c>=k)

       {
           printf("-2") ;
       }
        else if(p<k)

       {
           printf("0");
       }
       else
       {

           printf("0");
       }


        return 0;

          }
