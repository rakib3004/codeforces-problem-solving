
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;

 int main()
{


int a[3];
string p[3];
string q[3]={"rock","scissors","paper"};

 char c[3]={'F','M','S'};
int i,j;
for(i=0;i<3;i++)
{

    cin >> p[i];

}

  for(i=0;i<3;i++)
  {

      for(j=0;j<3;j++)
      {

       if(p[i]==q[j])

    {

       a[i]=j+1;

    }

      }
  }


  if((a[0]==a[1]&&a[1]==a[2])||(a[0]!=a[1]&&a[1]!=a[2]&&a[0]!=a[2]))
     {

         cout <<"?";
         return 0;
     }

     int x,y;
     int w,z;

       for(i=0;i<3;i++)
       {
           for(j=1;j<4;j++)
           {


            if(i==0)
            {

                x=1;
                y=2;
            }
            else if(i==1)
            {

                x=0;
                y=2;

            }
            else{


                x=0;
                y=1;
            }

           w=j+1;
          if(w==4)
          {

              w=1;
          }
          if(a[i]==j&&a[x]==w&&a[y]==w)
          {

              cout << c[i];
              return 0;
          }
          else

        {


            continue;
        }

           }

       }


  cout <<"?";
   return 0;

}
