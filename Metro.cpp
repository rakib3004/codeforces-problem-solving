
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o unsigned long long int
using namespace std;

int main()

{


   int n,s;


   cin>>n>>s;


   int a[n],b[n];

   int i;


   for(i=0;i<n;i++)
   {

    cin>>a[i];


   }

   for(i=0;i<n;i++)
{

     cin>>b[i];


}

if(a[0]==0)
{
    cout<<"NO";
     return 0;

}



  else if(a[0]==1&&a[s-1]==1)
  {

      cout<<"YES";
       return 0;
  }

  else if(a[s-1]==0&&b[s-1]==0)
  {

      cout<<"NO";
       return 0;
  }


 else if(a[s-1]==1&&b[s-1]==1)
  {

      cout<<"YES";
       return 0;
  }

  else if(a[s-1]==0&&b[s-1]==1)
  {


     for(i=s;i<n;i++)
     {

         if(a[i]==1&&b[i]==1)
         {
            cout<<"YES";
               return 0;
         }
     }


  }

  printf("NO");

 return 0;



}



