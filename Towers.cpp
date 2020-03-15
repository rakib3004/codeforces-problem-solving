
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
int main()

{


    int n;


    cin  >>n;

    int i,j;

    int a[n],b[n]={0};
     int    max=0;
    for(i=0;i<n;i++)
    {


   cin  >>a[i];


    }

    sort(a,a+n);


           j=0;
       b[0]=1;

       for(i=1;i<n;i++)
       {

           if(a[i]==a[i-1])
           {
           b[j]++;

           }
           else
           {

               j++;
               b[j]=1;
           }
       }

          sort(b,b+n);



       cout << b[n-1]<<" "<<j+1;

          return 0;
}
