#include<stdio.h>

int main()


{



    int n;

    scanf("%d",&n);

    int a[n+1];

    int i;

    for(i=1;i<=n;i++)
    {



        scanf("%d",&a[i]) ;


    }

    int temp;
              int y=0;
    int max=a[1],min=a[n],v=1,u=n;
                      for(i=1;i<=n;i++)
                      {

                          if(a[i]>max)

                          {

                              max=a[i];
                              v=i;
                          }
                          if(a[i]<=min)
                          {
                            min=a[i];
                            u=i;

                          }

                      }

                          if(v<u)
                          {
                            y=v-1+n-u;

                          }


                          else  if(v>u)
                          {

                              y=v-2+n-u;
                          }

                          else
                          {

                              y=0;
                          }

                      printf("%d",y);

    return 0;
}

