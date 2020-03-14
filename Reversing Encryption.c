
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
 int n,i,j=0;
  scanf("%d",&n);
 char l;
char a[n],b[n];

  scanf("%s",a);
              int x=0;

   int   m[n]={0};
      for(i=1;i<=n;i++)
      {

          if(n%i==0)
          {
           m[j]=i;
           j++;

          }
      }

      for(i=0;i<n;i++)
      {

          if(m[i]!=0)

          {
              for(j=m[i]-1;j>=0;j--)

              {
//              l= a[j];
//              a[j]=a[m[i]-j-1];
//              a[m[i]-j-1]=l;
                    b[j]=a[m[i]-j-1];
              }
            for(j=m[i]-1;j>=0;j--)

              {
                  a[j]=b[j];

              }
          }



          else
          {
              break;
          }
      }



   printf("%s",a);
        return 0;

        }
