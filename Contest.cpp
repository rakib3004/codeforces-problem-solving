
#include<iostream>
using namespace std;

int main()

{
int a,b,c,d;


     cin>>a>>b>>c>>d;

       int m,n;

    int m1,m2,n1,n2;

      m1=(3*a)/10;
      m2=a-((a/250)*c);

      n1=(3*b)/10;
      n2=b-((b/250)*d);


      m=std::max(m1,m2);
      n=std::max(n1,n2);

      if(m>n)
      {


          printf("Misha");
      }

      else if(n>m)
      {

         printf("Vasya");

      }

      else{


        printf("Tie");
      }



  return 0;
}





