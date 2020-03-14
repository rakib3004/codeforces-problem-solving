#include<stdio.h>
#include<stdlib.h>


#include<math.h>
int prime(int,int);
int main()

{

    int i,n,m,k;

    scanf("%d",&n) ;

     m=(n/2);
     k=(n/2)+(n%2);

     Al:
         i=prime( m, k) ;

         if((i==1)&&(m!=k))
         {

             printf("%d %d",m,k);

         }

         else
         {
          m--;
          k++;
            goto Al;
         }

        return 0;

}
 int prime(int m,int k)


 {
   int f1=1,f2=1;
   int i;

   for(i=2;i<=m;i++)

   {
       if((m%i==0)&&(k%i==0))

       {
           f1=0;
           break;
       }
   }


   if(f1==1)
           {
            return 1;

           }


     return 0;
 }


