
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o long long int
using namespace std;

int main()
            {




      o n,k;



      cin>>n>>k;
           o a[n];

      o i,j=1;


      for(i=0;i<n;i++)
      {


          cin>>a[i];

      }

             o x,y=1;





           for(i=1;i<k;i++)
           {


               k=k-i;
           }
           cout<<a[--k];


    return 0;

}
