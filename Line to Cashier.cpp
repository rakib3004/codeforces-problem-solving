
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{



    int n;
    int i,j;

    scanf("%d",&n);

    int a[n];
    int count[n]={0};
    int r[n][101];


    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);



    }

    for(i=0;i<n;i++)
    {
         count[i]=a[i]*15;
        for(j=0;j<a[i];j++)
        {

            scanf("%d",&r[i][j]);
            count[i]+=r[i][j]*5;
        }


    }


    int min=count[0];

    for(i=1;i<n;i++)

             {


                 if(count[i]<min)
                 {

                     min=count[i];
                 }
             }



          printf("%d",min) ;

   return 0;
}
