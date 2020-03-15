
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<cmath>
#include<cstdio>
#include<map>
#include<string>
#include<string.h>
#define   o   long long int
#define x  int i,n,k;cin >>n>>k;  int a[n];for(i=0;i<n;i++){cin>>a[i];}


using namespace std;

int main()

{


             int k;


             cin>>k;


           int a[12];

                int i;



           for(i=0;i<12;i++)
           {


              cin>>a[i];

           }
                 int put=0,out=0;

           sort(a,a+12);

           for(i=11;i>=0;i--)
           {

               if(put>=k)
               {

                   cout<<out;
                 return 0;
               }


               else

                {
                 put+=a[i];
               out++;


               }


           }

            if(put>=k)
               {

                   cout<<out;
                 return 0;
               }


             cout<<-1;
              return 0;

}
