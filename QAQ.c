#include<stdio.h>
   #include<string.h>
int main()

{

    char hyper[1332];

    scanf("%s",&hyper);

    int n,count=0;
    int i,j,k;

    n= strlen(hyper);

    for(i=0;i<n-2;i++)
    {
        if(hyper[i]=='Q')
        {

            for(j=i+1;j<n-1;j++)

            {
                if(hyper[j]=='A')
                {

                    for(k=j+1;k<n;k++)
                    {

                        if(hyper[k]=='Q')
                        {

                            count++;
                        }
                    }
                }
            }
        }


    }


    printf("%d",count);


    return 0;

}

