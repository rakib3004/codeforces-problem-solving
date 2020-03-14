#include<stdio.h>
int main()

{


    int i;
    int n;
    scanf("%d",&n);

    int live_1=0,live_2=0,dead_1=0,dead_2=0,count_1=0,count_2=0;

    int a[n][3];

    for(i=0;i<n;i++)
    {

        scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
    }


   for(i=0;i<n;i++)
   {



       if(a[i][0]==1)

       {
      live_1+=a[i][1];
      dead_1+=a[i][2];

       }

       else

       {
      live_2+=a[i][1];
      dead_2+=a[i][2];



       }

   }

   count_1=(live_1+dead_1)/2;
   count_2=(live_2+dead_2)/2;

       if(live_1>=count_1)
       {

           printf("LIVE\n");
       }

       else
       {


          printf("DEAD\n");
       }

        if(live_2>=count_2)
       {

           printf("LIVE");
       }

       else
       {


          printf("DEAD");
       }



      return 0;
}

