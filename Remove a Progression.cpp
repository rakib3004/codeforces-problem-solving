
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


    o n;

        cin>>n;


        o i;

         o TotalNumber[n],StepNumber[n];





       for(i=0;i<n;i++)
       {

           cin>>TotalNumber[i]>>StepNumber[i];

        StepNumber[i]=StepNumber[i]*2;

       }



       for(i=0;i<n;i++)
       {

        cout<<StepNumber[i]<<endl;


       }


    return 0;
    }


