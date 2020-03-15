
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



       int a[n];


       int i;


       for(i=0;i<n;i++)
       {


           cin>>a[i];



       }

       sort(a,a+n);


       if(a[n-1]-25>0)
       {

           cout<<a[n-1]-25;
       }

       else
       {

           cout<<0;
       }



   return 0;
}
