
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int

using namespace std;

int main()
{




      int n,m;

      cin>>n>>m;
            int i,j;



        string a[n];

              for(i=0;i<n;i++)
              {

                  cin>>a[i];


              }

              int b=0,counter=0,g,h;

           for(i=0;i<n;i++)
           {

               for(j=0;j<m;j++)
               {

                   if(a[i][j]=='B'&&b==0)

                   {
                       b=1;
                       g=i+1;
                       h=j+1;
                   }

                  if(a[i][j]=='B')
                  {

                      counter++;
                  }

               }
               if(counter!=0)

               {
                   break;
               }


           }

            b=counter/2;


          cout<<(g+b)<<" "<<(h+b);
        return 0;

}
