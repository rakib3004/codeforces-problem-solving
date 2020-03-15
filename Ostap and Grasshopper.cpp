
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<string>

using namespace std;

int main()

{


        int n,k;


        cin >>n>>k;

        string a;

        cin >> a;

        int g,t;

        int i;

        for(i=0;i<n;i++)
        {



           if(a[i]=='G')

           {

               g=i;
           }
           if(a[i]=='T')

           {

               t=i;
           }


        }

        if(g<t)
        {


         for(i=g+k;i<n;i=i+k)

         {

          if(a[i]=='T')
          {

              printf("YES");
              return 0;
          }
             if(a[i]=='#')
          {

              printf("NO");
              return 0;
          }

         }

        }




        if(g>t)
        {


         for(i=g-k;i>=0;i=i-k)

         {

          if(a[i]=='T')
          {

              printf("YES");
              return 0;
          }
             if(a[i]=='#')
          {

              printf("NO");
              return 0;
          }

         }

        }




        printf("NO");


           return 0;
}

