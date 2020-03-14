
#include<iostream>

#include<cstdio>

 using namespace std;

int main()

         {

           long long n,k,p;

        cin  >> n >>k;

                p=n/2+(n%2);


         if(k<=p)
         {

            cout  << (2*k) - 1;
         }

         else
         {

       cout <<  2*(k-p);
         }



               return 0;
         }
