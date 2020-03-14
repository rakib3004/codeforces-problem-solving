#include<stdio.h>

int main()

{

    int count=0;
    int n,k;
    int i;

    scanf("%d%d",&n,&k);

    int a[n];

    for(i=0; i<n; i++)
    {

        scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++)
    {

        if(a[i]<=k)
        {
            count++;

        }

        else
        {

            break;


        }

    }

    if(count==n)
    {


       printf("%d",count);
       return 0;
    }


    else

        for(i=n-1; i>0; i--)
        {

            if(a[i]<=k)
            {
                count++;


            }

            else
            {

                break;


            }

        }




    printf("%d",count);
    return 0;

}

