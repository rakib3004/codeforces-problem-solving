
#include<stdio.h>


int main()
{

  int i,n;
  scanf("%d",&n);
          int d=0;
  int a[n];

  int even=0,odd=0;
              int r=0;

  for(i=0;i<n;i++)

  {
      scanf("%d",&a[i]);

  }



  for(i=0;i<n;i++)

  {
  if(a[i]==1)
     {
           odd++;

     }

     else

        even++;

  }


  if(even<=odd)

  {
       d=even;

        r  =  odd-even;

            d+=(r/3);

            printf("%d",d);
            return 0;

  }

  else
  {



      printf("%d",odd);
      return 0;

  }

}
