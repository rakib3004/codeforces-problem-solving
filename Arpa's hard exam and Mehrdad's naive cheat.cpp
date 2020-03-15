
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


 int main()
{


  long int n;
  long long int k;
   scanf("%ld",&n);
         if(n==0)
         {

             printf("1");
             return 0;
         }
    n=n%4;
  int a[4]={0,1,2,3} ;

  int b[4]={6,8,4,2}  ;
     for(int i=0;i<4;i++)
     {


  if(n==a[i])

  {

      printf("%d",b[i]);
  }
}
  return 0;

}

