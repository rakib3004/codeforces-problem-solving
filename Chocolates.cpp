
#include<stdio.h>
  #include<iostream>
  #include<string>
   #include<cstdio>
   #include<cmath>
   #include<algorithm>

#include<string.h>

 #define o  long long int
using namespace std;

int main()

{


      o n;


      cin>>n;


       o a[n];
      o i;


      for(i=0;i<n;i++)
      {




         cin>>a[i];


      }


      o count=a[n-1];
      o b=a[n-1];
      for(i=n-2;i>=0;i--)
      {




          if(b==1)
          {
//               count+=1;
              break;

          }

          else  if(a[i]<b)
          {

              count+=a[i];
              b=a[i];

          }

          else if(a[i]>=b)
          {
                    b--;
              count+=b;





          }

      }


     cout<<count;

    return 0;

}
