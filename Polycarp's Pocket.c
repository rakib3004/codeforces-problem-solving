
#include<stdio.h>

#include<string.h>

#include<string.h>

int main()
{



    int n;

    scanf("%d",&n);

    int a[n];

    int fr[n],max=0;

    int i,j,count=1;

      fr[0]=0;
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

        fr[i]=1;

    }

    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {

           if(a[i]==a[j])
           {


              fr[i]++;
              fr[j]=0;


           }

        }
    }
        max=fr[0];
       for(i=1;i<n;i++)
       {
          if(fr[i]>max)

            max=fr[i];

       }

       printf("%d",max);
   return 0;
}
