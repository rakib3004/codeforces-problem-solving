
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()

{


       int n;
            cin >>n;
               int q;
             string a;

             int p;



       int i,j;

       for(i=0;i<n;i++)
       {

          cin  >>p;

          cin >>a;
               q=p;
          for(j=0;j<q;j++)
          {

          if(a[j]=='8')
          {

              p=q-j;
              break;
          }
          else{

            p=0;

          }




          }

          if(p>=11)
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
