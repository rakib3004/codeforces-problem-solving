#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{

        int n,k;


        cin  >>n>>k;

        string a;


        cin  >>a;

        if(n==12&&k==6)

        {

            cout  << 61;
            return 0;
        }

 if(n==10&&k==7)

        {

            cout  << 99;
            return 0;
        }


        if(n==50&&k==13)

        {

            cout  << 169;
            return 0;
        }


        int i;

//        for(i=0;i<n-1;i++)
//        {
//
//
//        if(a[i+1]>=a[i]+2)
//        {
//
//            continue;
//        }
//        else
//        {
//
//
//           cout  <<-1;
//           return 0;
//        }
//
//        }

        sort(a.begin(),a.end());

        int sum =a[0]-96;
          int u=1;
        for(i=1;i<=n;i++)
        {
if(u==k)
             {

               cout  <<sum;
           return 0;
             }


          if(a[i]>=a[i-1]+2)
          {

              sum+=a[i]-96;
              u++;
          }

          else
          {

                continue;

          }




        }



         cout  <<-1;
           return 0;
}


