#include<stdio.h>

int main()

{


    int n;
    scanf("%d",&n);

    int a[n];

    int i;
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }


    int x=0,y=0,z=0;

    for(i=0;i<n;i++)
    {

        if(i%3==0)
        {

            x+=a[i];
        }
        else if(i%3==1)
        {


            y+=a[i];

        }

        else
        {

            z+=a[i];
        }

    }

    if(x>y&&x>z)
    {

        printf("chest");
    }


  else  if(y>x&&y>z)
    {

        printf("biceps");
    }
    else

        {


          printf("back");
    }

     return 0;
}

