
#include<stdio.h>

int main()

         {
             int sum=0;
             int n;
             int d;
            double dp=0.0000;
             int r=1129;
             int i,j;
             scanf("%d",&n);
             int a[n];
             for(i=0;i<n;i++)
             {

                 scanf("%d",&a[i]);
                 sum+=a[i];
             }



                    dp=((float)sum/(float)n)*2;

                   d=(int)dp;




             for(i=0;i<n;i++)
             {

                 for(j=i+1;j<n;j++)
                 {

                     if(a[i]==d-a[j])
                     {
                         printf("%d %d\n",i+1,j+1);

                         a[j]+=r;
                         r+=11803004;

                         a[i]-=r;

                     }
                 }
             }
             return 0;

         }
