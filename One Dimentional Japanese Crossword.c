#include<stdio.h>
int main()
{

     int i,n,d=0;

     scanf("%d",&n);

    char a[n+1];
      int j=0,count[n+1];
    scanf("%s",&a);
           count[0]=0;

            for(i=0;i<n+1;i++)
    {
       if(a[i]=='B')
       {
          count[j]++;
          continue;
       }

    else{

     if(count[j]!=0)
     {
       d++;
         j++;
         count[j]=0;
     }
    }

    }

    printf("%d\n",d);
    for(i=0;i<n+1;i++)
    {
       if(a[i]=='B')
       {
          count[j]++;
          continue;
       }

    else{

     if(count[j]!=0)
     {
         printf("%d ",count[j]);
         j++;
         count[j]=0;
     }
    }

    }


}
