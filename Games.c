#include<stdio.h>

int main()


{
    int i,j,n;
scanf("%d",&n);
int count=0;
       int a[n][2];

       for(i=0;i<n;i++)
       {



               scanf("%d %d",&a[i][0],&a[i][1]);

       }



       for(i=0;i<n;i++)
       {
        for(j=0;j<n;j++)
        {


          if(a[i][0]==a[j][1])
             {

               count++;
             }

       }
       }
       printf("%d",count);


       return 0;
}


