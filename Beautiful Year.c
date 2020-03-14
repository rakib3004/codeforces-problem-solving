#include<stdio.h>

int main()

{


    int n;
    scanf("%d",&n);

    int i,j,a,b[4];
    a=n+1;

    count :
        b[0]=a%10;
        b[1]=(a%100)/10;
        b[2]=(a%1000)/100;
        b[3]=a/1000;


        for(i=0;i<4;i++)
        {

            for(j=i+1;j<4;j++)
            {
             if(b[i]==b[j])
             {

                 a++;
                 goto count;
             }

            }
        }


        printf("%d",a);

        return 0;
}

