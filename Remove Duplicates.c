#include<stdio.h>

int main()

{

    int n;

    scanf("%d",&n);

    int  i,j;

    int a[n];

    int count=0;

    for(i=n-1;i>=0;i--)
    {

        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)

    {
       for(j=i+1;j<n;j++)

       {
           if(a[i]!=1129&&a[i]==a[j])
           {

               a[j]=1129;
               count++;
           }
       }

    }

     int node=n-count;
             printf("%d\n",node);
     int b[node];
     j=0;

     for(i=0;i<n;i++)
     {

         if(a[i]!=1129)
         {

             b[j]=a[i];
             j++;
         }



     }




     for(i=node-1;i>=0;i--)
     {


         printf("%d ",b[i]);
     }

         return 0;
}

