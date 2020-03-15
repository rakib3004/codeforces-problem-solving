
#include<stdio.h>

int main()

{




int n,p,i,j,f=0;


        scanf("%d%d",&n,&p);


int a[n][50];
int k[n];
      int c=0;

for(i=0;i<n;i++)
{


    scanf("%d",&k[i]);

    for(j=0;j<k[i];j++)
    {



        scanf("%d",&a[i][j]);
        if(a[i][j]<p)
               {

                   f=1;
               }

    }

    if(f)
    {


        c++;
        f=0;
    }

}

printf("%d\n",c);



for(i=0;i<n;i++)
{

    for(j=0;j<k[i];j++)
    {


        if(a[i][j]<p)
        {

            printf("%d ",i+1);

                 break;
        }
    }
}



  return 0;
}





