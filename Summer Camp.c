#include<stdio.h>

int main()

{

    int n;
      int i;
      int a[10000];
      int p=10;

     scanf("%d",&n);

     if(n<10)
     {

         printf("%d",n);

         return 0;
     }

     else if(n<100)
     {
          for(i=10;p<100;i=i+2)

         {

         a[i]=p/10;
         a[i+1]=p%10;
         p++;


         }
     }



     else

     {

 for(i=10;p<100;i=i+2)

         {

         a[i]=p/10;
         a[i+1]=p%10;
         p++;


         }

//         printf("%d\n\n\n",i);



         for( ;p<1000;i=i+3)

         {

         a[i]=p/100;
         a[i+1]=(p%100)/10;
        a[i+2]=((p%100)%10);

         p++;


         }


     }

     printf("%d",a[n]) ;
               return 0;

}



