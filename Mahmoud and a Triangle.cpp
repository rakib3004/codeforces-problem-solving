
#include<stdio.h>
#include<iostream>
#include<algorithm>




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


   for(i=1;i<n-1;i++)
   {



       if(a[i]+a[i-1]>a[i+1])
       {

           if(a[i+1]-a[i]<a[i-1])

           {
               cout<<"YES";
                   return 0;
           }
       }

   }


   cout<<"NO";

}
