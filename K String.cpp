
#include<stdio.h>
  #include<iostream>
  #include<string>
   #include<cstdio>
   #include<cmath>
   #include<algorithm>

#include<string.h>


using namespace std;

int main()

{


 int n;
 char h;

 int i;



           int p[256]={0};



   cin>>n;


   string a;


   cin>>a;



   int b=a.size();

   if(b%n)
   {

       cout<<-1;
   }

     else
     {




      for(i=0;i<b;i++)
      {



          p[a[i]]++;
      }




     for(i=97;i<123;i++)
     {

         if(p[i]%n==0)

         {

           p[i]/=n;



         }

         else

         {




             cout<<-1;

             return 0;
         }
     }


     }

         int j,k;
     for(i=0;i<n;i++)
     {


         for(j=97;j<123;j++)
         {

           for(k=0;k<p[j];k++)

             {
                 h=j;
                 cout<<h;
             }

         }
     }


    return 0;

}
