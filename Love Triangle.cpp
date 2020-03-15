
#include<stdio.h>
#include<string>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int
using namespace std;

int main()
{


      int n,i;



    cin>>n;


    int a[n+1]={0};


    for(i=1;i<=n;i++)
    {

       cin>>a[i];

    }


    int b,c,d;



    for(i=1;i<=n;i++)
    {
     if(a[i]==i)
     {

         cout<<"NO";
         return 0;
     }

     b=a[i];
     c=a[b];


     if(i==a[c]&&c==a[b]&&b==a[i])
     {

         cout<<"YES";
         return 0;
     }





    }




 cout<<"NO";




    return 0;
    }


