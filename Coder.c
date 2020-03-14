
#include<stdio.h>

int main()

{
    int n;
    scanf("%d",&n);


    int i,j;
    int result;

    if(n%2==0)
    {
        result=(n*n)/2;
        printf("%d",result);

        for(i=0; i<n; i++)
        {

            printf("\n");
            for(j=0; j<n; j++)
            {

                if((i+j)%2==0)
                {
                    printf("C") ;

                }
                else

                {

                    printf(".") ;

                }

            }
        }

    }
    else
    {

        result=(n/2)*n;
        result+=((n/2)+1);
        printf("%d",result);

        for(i=0; i<n; i++)
        {

            printf("\n");
            for(j=0; j<n; j++)
            {

                if(i%2==0)
                {

                    if((i+j)%2==0)
                    {
                        printf("C") ;

                    }
                    else

                    {
                        printf(".") ;

                    }

                }
                else
                {
                    if((i+j)%2!=0)
                    {
                        printf(".") ;

                    }
                    else

                    {
                        printf("C") ;

                    }

                }



            }

        }

    }


    return 0;
}

