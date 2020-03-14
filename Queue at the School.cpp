
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{
     int n,t;
 int i;
     scanf("%d%d",&n,&t);

     char a[n];
       scanf("%s",a);


     while(t--) {

            for(i=0;i<n;i++)
            {

          if(a[i]=='B'&&a[i+1]=='G')
          {


              a[i+1]='B' ;
              a[i]='G';
              i++;
          }


       }

     }

       printf("%s",a);



   return 0;
}
