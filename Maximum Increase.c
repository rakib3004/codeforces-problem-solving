
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  int main()
  {


        int i,n,c=1;

       scanf("%d",&n);

                       int a[n];

        for(i=0;i<n;i++)
        {

            scanf("%d",&a[i]);
        }

         int m=0;
           for(i=0;i<n-1;i++)
        {
               if(a[i]<a[i+1]&&m<=c){
     	   	    c++;
     	   	    m=c;
			}
			else if(a[i]<a[i+1]) c++;
			else c=1;
        }

             if(c>m)

             {
            printf("%d",c);

             }


             else
             {
             printf("%d",m);

             }


     return 0 ;

  }
