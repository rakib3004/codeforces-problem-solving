
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#define   o long long int

using namespace std;



int main()
{

    int n;

    cin>>n;



    int a[n];


    int i;
            int even =0;

     int sum=0;

    for(i=0;i<n;i++)
    {



        cin>>a[i];
         if(a[i]%2==0)
         {

          even++;
         }
         sum+=a[i];



    }


    if(sum%2)
    {

        cout<<n-even;

    }

      else{ cout<<even;}

        return 0;


 }
