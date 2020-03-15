
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
int a=1;

for(i=0;  ;i++)
{

   if(a==n)
   {

       cout<<"YES";
         return 0;
   }

   else if(a>n)

   {
       cout<<"NO";
       return 0;
   }

   else {

    a*=2;

   }
}


return 0;

}
