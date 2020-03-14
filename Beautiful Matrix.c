#include<stdio.h>
#include<stdlib.h>

#include<math.h>

int main()
{
   int i=0;
   int j=0;

   int array[5][5],result=0;


   for(i=0;i<5;i++)
    {
   for(j=0;j<5;j++)
   {
     scanf("%d",&array[i][j]);
   }
    }


    for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
   {

     if(array[i][j]==1)
     {

         result=abs(2-i)+abs(2-j);

     }
    }
    }

     printf("%d",result);


     return 0;

}

