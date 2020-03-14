#include<stdio.h>

int main()

{


    int x,y,z;

    int count;

    scanf("%d%d%d",&x,&y,&z);


    if(x<1||y<2||z<4)
    {

        printf("0");
        return 0;
    }
    x*=4;
    y*=2;


    if(z<=x&&z<=y)
    {
  count=7*(z/4);
        printf("%d",count);

    }
   else  if(y<=x&&y<=z)
    {

        count=7*(y/4);
        printf("%d",count);
    }
    else if(x==y&&x==z)
    {

       count=7*(z/4);
        printf("%d",count);
    }
     else
    {

        count=7*(x/4);
        printf("%d",count);
    }
     return 0;
}


