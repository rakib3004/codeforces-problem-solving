#include<stdio.h>

int main()


{

      int i;

    int a[4],e=0;

    for(i=0;i<4;i++)
    {
       scanf("%d",&a[i]);

    }
      int max=a[0];


     for(i=1;i<4;i++)
     {

         if(a[i]>max)
         {
            max=a[i];
          e=i;

         }


     }

     for(i=0;i<4;i++)
     {

         if(i==e)
         {

             continue;
         }
         else{
            printf("%d ",max-a[i]);
         }
     }

 return 0;
}

