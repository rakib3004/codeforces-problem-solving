
#include<stdio.h>
#include<string>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{



string a;


cin>>a;


 int  d,i;

 d=a.size();

 int e;


 e=pow(2,d)-2;


 int f=1;
 for(i=0;i<d;i++)
 {


     if(a[i]=='7')
     {


        f*=2;

     }

     else if(a[i]=='4')
     {

       f*=2;
       f--;

     }

 }




 e=e+f;




 cout<<e;


return 0;

}






