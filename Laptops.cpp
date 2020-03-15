
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



int n;


cin>>n;


int i;


int a[n],b[n];


for(i=0;i<n;i++)
{

       cin>>a[i]>>b[i];



}



for(i=0;i<n-1;i++)
{


     if(a[i]!=b[i])
     {

         cout<<"Happy Alex" ;
         return 0;
     }


}


cout<<"Poor Alex";
    return 0;
    }


