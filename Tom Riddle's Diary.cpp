
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()

{


 int i,j=1,k=0,n;


cin  >>n;


string a[n],b[n];
    int t[n]={0};
cin >>a[0];
b[0]=a[0];

for(i=1;i<n;i++)
{

    cin >>a[i];

    for(k=0;k<j;k++)
    {
      if(a[i]==b[k])
      {

          t[i]=1;
      }




    }

    if(!t[i])
    {

         b[j]=a[i];
            j++;
           t[i]=0;
    }
}

   for(i=0;i<n;i++)
   {


     if(t[i])
{

    printf("YES\n");
}

else
{


       printf("NO\n");


}


   }








return 0;

}
