
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







    int n;

       int  p;

    cin>>n;


    n=n%4;

    char a;


    if(n==0)
    {


      a='A';
      p=1;

    }

    else if(n==1)
    {



        a='A';
        p=0;

    }

    else if(n==2)
    {


        a='B';
        p=1;

    }


    else if(n==3)
    {



        a='A';
        p=2;
    }





      cout<<p<<" "<<a;


    return 0;

}
