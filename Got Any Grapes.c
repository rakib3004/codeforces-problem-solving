#include<stdio.h>


int main ()



{

    int i;

    int a[3],b[3],c[3];

    for(i=0;i<3;i++)
    {

        scanf("%d",&a[i]);
    }
     for(i=0;i<3;i++)
    {

        scanf("%d",&b[i]);
    }

    if(a[0]>b[0])

    {
        printf("NO") ;
       return 0;
    }
    else

        {

            c[0]=b[0]-a[0];
              c[1]=c[0]+b[1];
           //   printf("c[1]:%d a[1]:%d\n",c[1],a[1]);


              if(c[1]<a[1])

              {
                  printf("NO");
                  return 0;
              }

              else
              {



                  c[2]=c[1]-a[1] +b[2];

                //  printf("c[2]:%d a[2]:%d\n",c[2],a[2]);

                  if(c[2]<a[2])
                  {

                      printf("NO");
                      return 0;
                  }

                  else
                  {

                      printf("YES");
                      return 0;
                  }
              }



        }

        return 0;
}

