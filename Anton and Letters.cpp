
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){

      int i,n,p[256]={0};
      char  a[1245];

   fgets(a,1000,stdin);
//       n=a.size();
//
//       cout  << n<<endl;
   int    count=0;
     for(i=0;a[i]!='\0';i++)
     {

        if(a[i]>='a'&&a[i]<='z')
        {
             p[a[i]]++;

        }

     }

     for(i=97;i<=122;i++)
     {

         if(p[i]!=0)
         {

             count++;
         }
     }

      cout  << count;
return 0;

}
