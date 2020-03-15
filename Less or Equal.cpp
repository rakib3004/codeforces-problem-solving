
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o   long long int

using namespace std;


int main()
            {




       int n,k;


       cin>>n>>k;



       int a[n]={0};



       int i;


       for(i=0;i<n;i++)
       {



           cin>>a[i];
       }


       sort(a,a+n);


       if(k==0)
       {

           if(a[0]>1)
           {

               cout<<a[0]-1;
           }
           else
           {
               cout<<-1;

           }
       }

    else if(a[k-1]==a[k])   {
                          cout<<-1;
       }
       else
       {

           cout<<a[k-1];
       }

    return 0;

}
