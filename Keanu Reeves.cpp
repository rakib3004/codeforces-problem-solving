
#include<stdio.h>

 #include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int

using namespace std;




int main()
{



	int n,i;
	string binary;
	     int a0=0,a1=0,b0=0,b1=0;

	cin>>n;



	cin>>binary;
	     int k=n/2;

	for(i=0;i<k;i++)
    {



        if(binary[i]=='0')
        {
             a0++;

        }
        else
        {

            a1++;
        }
    }

	for(i=k;i<n;i++)
    {



        if(binary[i]=='0')
        {
             b0++;

        }
        else
        {

            b1++;
        }
    }

     if((a0+b0)!=(a1+b1))
     {

         cout<<1<<endl;
         cout<<binary;

     }
  else  if(a0==a1)
    {

      k++;
      cout<<2<<endl;
      for(i=0;i<k;i++)
      {

          cout<<binary[i];
      }
       cout<<" ";
         for(i=k;i<n;i++)
      {

          cout<<binary[i];
      }


    }

    else if (b0==b1)

        {

        k--;


        cout<<2<<endl;
      for(i=0;i<k;i++)
      {

          cout<<binary[i];
      }
       cout<<" ";
         for(i=k;i<n;i++)
      {

          cout<<binary[i];
      }
        }





          else
          {
               cout<<2<<endl;
      for(i=0;i<k;i++)
      {

          cout<<binary[i];
      }
       cout<<" ";
         for(i=k;i<n;i++)
      {

          cout<<binary[i];
      }

          }



        return 0;



}
