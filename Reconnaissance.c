
#include<stdio.h>
   #include<stdlib.h>

int main()

{

    int n,h;
    int count=0;
    scanf("%d%d",&n,&h);
    int i,j;
    int a[n];

    for(i=0;i<n;i++)

    {

        scanf("%d",&a[i]);
    }



    for(i=0;i<n;i++)

    {

            for(j=i+1;j<n;j++)
            {
              if(abs(a[i]-a[j])<=h)

              {

                  count++;
              }

            }
    }


    printf("%d",2*count);

    return 0;
}
