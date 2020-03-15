
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


     int n;

     cin>>n;


           int a[n],b[n];


              int i;


               int sum_of_a=0;
               int sum_of_b=0;

              for(i=0;i<n;i++)
              {

                  cin>>a[i];
                  sum_of_a+=a[i];


              }



               for(i=0;i<n;i++)
              {

                  cin>>b[i];
                  sum_of_b+=b[i];


              }



             if(sum_of_a<sum_of_b)
             {

                 cout<<"No";

             }

             else
             {


          cout<<"Yes";

             }




        return 0;

}
