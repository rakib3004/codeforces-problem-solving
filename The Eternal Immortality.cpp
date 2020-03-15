
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




      o a,b,c;



      cin>>a>>b;

      o i;
             o factorial=1;

 c=b-a;
 if(c>6)
 {

     c=6;
 }
      for(i=0;i<c;i++)
      {

          factorial*=b%10;

          b--;

      }



       cout<<factorial%10;


    return 0;

}
