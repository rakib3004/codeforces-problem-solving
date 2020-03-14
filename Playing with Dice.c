  #include<stdio.h>

      #include<math.h>

  #include<stdlib.h>


int main()

{


    int a,b;
    scanf("%d%d",&a,&b);
    int p,q;
    int n;
    int x,y,z;

    x=0;
    y=0;
    z=0;
    for(n=1;n<7;n++)
    {

        p=abs(n-a);


        q=abs(n-b);



        if(p<q)

        {
            x++;
        }
        else if(p==q)

        {
            y++;
        }

        else

        {

            z++;
        }

    }

    printf("%d %d %d",x,y,z);

    return 0;


}

