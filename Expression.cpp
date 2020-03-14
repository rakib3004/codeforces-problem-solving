
#include<stdio.h>

int main()

         {

          int i,j,k;
          int a,b,c;
          int v[5];
          scanf("%d%d%d",&a,&b,&c);


          v[0]=a+b*c;
          v[1]=a*(b+c);
          v[2]=a*b*c;
          v[3]=(a+b)*c;
          v[4]=a+b+c;

             j=v[0];
       for(i=1;i<5;i++)

       {
          if(v[i]>j)

          {
              j=v[i];
          }
       }


      printf("%d",j);



               return 0;
         }
