
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


    int a[n]={0};


    for(i=0;i<n;i++)
    {

       cin>>a[i];

    }


   sort(a,a+n);





    for(i=0;i<n;i++)
    {
     if(a[i]!=0)
     {

        break;
     }



    }

      int bit=1;


    for ( i=i+1 ; i<n;i++)
    {


        if(a[i]!=a[i-1])
        {

                bit++;
        }


    }







 cout<<bit;




    return 0;
    }


