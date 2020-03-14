#include<stdio.h>
#include<string.h>
#include<string.h>

  int main()
  {


      int i,n;
      int t[4]={0};
      int p[4][5040]={0};


      scanf("%d",&n);

      int a[n];

      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
          if(a[i]==1)

          {
              p[1][t[1]]=i+1;
              t[1]++;
          }
         else if(a[i]==2)

          {
              p[2][t[2]]=i+1;
              t[2]++;
          }

          else
          {
              p[3][t[3]]=i+1;

              t[3]++;
          }


      }
          int min=t[1];
      for(i=2;i<4;i++)
      {
            if(t[i]<min)

            {
                min=t[i];
            }

      }


          printf("%d\n",min);


      for(i=0;i<min;i++)

      {
          printf("%d %d %d\n",p[1][i],p[2][i],p[3][i]);
      }







     return 0 ;

  }

