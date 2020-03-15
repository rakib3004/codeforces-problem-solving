
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include <numeric>

using namespace std;

int main()

{


      int n;

      cin  >>n;

       if(n%2)
       {

           cout  <<0;
           return 0;
       }

      int i;


     i=n/4;

     if(n%4==0)
     {

         i--;
     }

        cout  <<i;
           return 0;
}

