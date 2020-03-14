
#include<iostream>

#include<cstdio>

 using namespace std;

int main()

         {

           long long g;

        cin  >> g;


         if(g%2==0)
         {

             g/=2;
         }

         else
         {

             g++;

             g/=2;
             g=-g;
         }

      cout  << g<<endl;

               return 0;
         }
