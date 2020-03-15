
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


o p=0,m=0,maxw=-9999999,j=0;

cin>>n;


o a[n],b[n];



int i;


for(i=0;i<n;i++)
{


   cin>>a[i];
   b[i]=a[i];


if(a[i]<0)
{

    a[i]=abs(a[i]);
}

   p=sqrt(a[i]);

   m=p*p;

   if(a[i]!=m||b[i]<0)
   {

   j=b[i];

        if(j>maxw)
        {


            maxw=j;
        }


   }



}






cout<<maxw;

return 0;

}
