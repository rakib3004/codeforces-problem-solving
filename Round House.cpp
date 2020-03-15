
#include<stdio.h>
#include<stdlib.h>





int main()
{





int n,a,b;
int p;


scanf("%d%d%d",&n,&a,&b);


int i;
b=b%n;

if(b>=0)
{

    p=a+b;

    if(p>n)

    {

        p=p-n;
    }
    printf("%d",p);


    return 0;


}

else

{




    for(i=b;i<0;i++)

    {



        a--;


        if(a==0)
        {

            a=n;


        }

    }
}



 printf("%d",a);




return 0;

}


